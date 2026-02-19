#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->listWidget);
    ui->listWidget->setSelectionMode(QAbstractItemView::SelectionMode::ExtendedSelection);
    create();

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNew_triggered()
{
checksave();
create();

}

void MainWindow::on_actionOpen_triggered()
{
checksave();
QString path= QFileDialog::getOpenFileName(this,"Open","","test.txt");
if(path.isEmpty())return;
open(path);
}

void MainWindow::on_actionSave_triggered()
{
    if(m_filename.isEmpty()){
        on_actionSaveAS_triggered();
        return;
    }
    save(m_filename);

}

void MainWindow::on_actionSaveAS_triggered()
{
    QString path=QFileDialog::getSaveFileName(this,"Open","test.txt");
    if(path.isEmpty())return;
    save(path);
}

void MainWindow::on_actionEit_triggered()
{
close();
}

void MainWindow::on_actionAdd_triggered()
{
createitem(Qt::CheckState::Unchecked,QString("New Item"));
m_change=true;

}

void MainWindow::on_actionRemove_triggered()
{
QList<QListWidgetItem*> list=ui->listWidget->selectedItems();
foreach (QListWidgetItem *itm, list)
{
    delete ui->listWidget->takeItem(ui->listWidget->row(itm));
}
m_change=true;
}

void MainWindow::on_actionClear_triggered()
{
ui->listWidget->clear();
m_change=true;
}

void MainWindow::on_actionSelect_all_triggered()
{
ui->listWidget->selectAll();
}

void MainWindow::on_actionSelect_none_triggered()
{
ui->listWidget->clearSelection();
}

void MainWindow::on_actionChecked_triggered()
{
    QList<QListWidgetItem*> list = ui->listWidget->selectedItems();
    foreach(QListWidgetItem *itm, list) {
        itm->setCheckState(Qt::CheckState::Checked);
    }
    m_change=true;
}

void MainWindow::on_actionUnchecked_triggered()
{
    QList<QListWidgetItem*> list = ui->listWidget->selectedItems();
    foreach (QListWidgetItem *itm, list) {
        itm->setCheckState(Qt::CheckState::Unchecked);
    }
    m_change=true;
}

void MainWindow::on_actionPartially_triggered()
{
    QList<QListWidgetItem*> list = ui->listWidget->selectedItems();
    foreach (QListWidgetItem *itm, list)
    {
        itm->setCheckState(Qt::CheckState::PartiallyChecked);
    }
    m_change=true;
}

void MainWindow::create()
{
m_change = false;
m_filename.clear();
ui->listWidget->clear();
}

void MainWindow::open(QString path)
{
    QFile file(path);
    if(!file.open(QIODevice::ReadOnly)){
        QMessageBox::critical(this,"Error",file.errorString());
        return;
    }
    QDataStream stream(&file);
    int count;
    stream>>count;
    for(int i=0;i<count;i++){
        int state =0;
        QString name;
        stream>>state;
        stream >>name;
        Qt::CheckState checkstate=static_cast<Qt::CheckState>(state);
        createitem(checkstate,name);

    }
    file.close();
    m_filename = path;
    m_change = false;
}

void MainWindow::save(QString path)
{
QFile file(path);
if(!file.open(QIODevice::WriteOnly)){
    QMessageBox::critical(this,"Error",file.errorString());
    return;
}
QDataStream stream(&file);
stream<<ui->listWidget->count();
for(int i=0;i<ui->listWidget->count();i++)
{
    QListWidgetItem *item=ui->listWidget->item(i);
    int state=static_cast<int>(item->checkState());
    stream<<state;
    stream<<item->text();
}
file.close();
m_filename=path;

m_change=false;
}

void MainWindow::checksave()
{
if(!m_change) return;
QMessageBox::StandardButton btn = QMessageBox::question(this,"Save file?","Do you want to save your chacnges?");
if(btn==QMessageBox::StandardButton::Yes) save(m_filename);
}

void MainWindow::createitem(Qt::CheckState state, QString name)
{
QListWidgetItem *item=new QListWidgetItem(name,ui->listWidget);
item->setCheckState(state);
item->setFlags(Qt::ItemIsEnabled|Qt::ItemFlag::ItemIsEditable|Qt::ItemFlag::ItemIsTristate|Qt::ItemFlag::ItemIsUserCheckable|Qt::ItemIsSelectable);
ui->listWidget->addItem(item);
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    event->accept();
}
