#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlTableModel>
#include <login.h>
#include <ui_login.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_actionLoginShow_triggered();

    void UpdateAndShow();

    void on_btnDelete_clicked();

    void on_cmbTable_activated(int index);

    void on_cmbView_activated(int index);

    void on_cmbFontSize_currentTextChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    Login* login;
    QSqlTableModel *model;

public slots:
    void slot(QStringList tabName, QStringList view);
};
#endif // MAINWINDOW_H
