#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include <QListWidgetItem>
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>
#include <QCloseEvent>
#include <QDataStream>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionSaveAS_triggered();

    void on_actionEit_triggered();

    void on_actionAdd_triggered();

    void on_actionRemove_triggered();

    void on_actionClear_triggered();

    void on_actionSelect_all_triggered();

    void on_actionSelect_none_triggered();

    void on_actionChecked_triggered();

    void on_actionUnchecked_triggered();

    void on_actionPartially_triggered();

private:
    Ui::MainWindow *ui;
    QString m_filename;
    bool m_change;
    void create();
    void open(QString path);
    void save(QString path);
    void checksave();
    void createitem(Qt::CheckState state,QString name);


    // QWidget interface
protected:


    // QWidget interface
protected:
    void closeEvent(QCloseEvent *event);
};
#endif // MAINWINDOW_H
