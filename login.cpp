#include "login.h"
#include "ui_login.h"
#include "QLineEdit"
#include "QGraphicsDropShadowEffect"

Login::Login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);


    ui->lineEditPassword->setEchoMode(QLineEdit::Password);
    ui->cmbDatabaseName->setEditable(true);
    ui->cmbDatabaseName->lineEdit()->setAlignment(Qt::AlignCenter);


    QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect();
    shadow->setBlurRadius(15);
    shadow->setColor(Qt::gray);
    shadow->setOffset(3);
    ui->btnConnect->setGraphicsEffect(shadow);


    ui->btnConnect->setEnabled(false);

}

Login::~Login()
{
    delete ui;
}

void Login::on_btnConnect_clicked()
{
    if(ui->lineEditServerName->text() == "")
    {
        QMessageBox::critical(this,"Ошибка...", "Введите назваине Сервера ");
        return;
    }



    db= QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("DRIVER={SQL Server}; SERVER=" + ui->lineEditServerName->text() + ";DATABASE=" + ui->cmbDatabaseName->currentText() + ";");
    db.setUserName(ui->lineEditLogin->text());
    db.setPassword(ui->lineEditPassword->text());



    if(db.open())
    {
        allTabName.clear(), allViewName.clear();
        QMessageBox::information(this,"Успешно!", "Соединилось ");


        //для получения списка Таблиц
        QSqlQuery tablesQuery("SELECT table_name FROM information_schema.tables WHERE table_type = 'BASE TABLE'", db);

        while (tablesQuery.next()) {
            QString tableName = tablesQuery.value(0).toString();
            allTabName.append(tableName);
        }


        //для получения списка View
        QSqlQuery query("SELECT TABLE_NAME FROM INFORMATION_SCHEMA.VIEWS WHERE TABLE_SCHEMA = 'dbo'", db);

        while (query.next()) {
            QString viewName = query.value(0).toString();
            allViewName << viewName;
        }


         emit signal(allTabName, allViewName);

        this->close();
    }
    else
    {
        QMessageBox::critical(this,"Ошибка...", "Подключение не установленно");
    }

}


void Login::on_lineEditServerName_editingFinished()
{

    if(ui->lineEditServerName->text() == "")
    {
        QMessageBox::critical(this,"Ошибка...", "Введите назваине Сервера ");
        return;
    }


    db= QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("DRIVER={SQL Server}; SERVER=" + ui->lineEditServerName->text());
    db.setConnectOptions("SQL_ATTR_CONNECTION_TIMEOUT=2;SQL_ATTR_LOGIN_TIMEOUT=2");

    if(db.open())
    {
        //для получения списка баз данных
        QSqlQuery query("SELECT name FROM sys.databases", db);

        while (query.next()) {
            QString databaseName = query.value(0).toString();
            ui->cmbDatabaseName->addItem(databaseName);
        }

        ui->btnConnect->setEnabled(true);
    }
    else
    {
        QMessageBox::critical(this,"Ошибка...", "Подключение не установленно, сервер не найден");
        ui->cmbDatabaseName->clear();
    }
}
