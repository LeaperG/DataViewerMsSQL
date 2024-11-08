#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QtSql>
#include <QMessageBox>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_btnConnect_clicked();

    void on_lineEditServerName_editingFinished();

private:
    Ui::Login *ui;
    QSqlDatabase db;
    QStringList allTabName;
    QStringList allViewName;

signals:
    void signal(QStringList tabName, QStringList view);
};

#endif // LOGIN_H
