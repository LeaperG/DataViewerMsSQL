#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QGraphicsDropShadowEffect"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    login = new Login;
    connect(login, &Login::signal, this, &MainWindow::slot);
    ui->btnDelete->setEnabled(false);
    login->show();

    //тень для кнопки
    QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect();
    shadow->setBlurRadius(15);
    shadow->setColor(Qt::gray);
    shadow->setOffset(3);
    ui->btnDelete->setGraphicsEffect(shadow);
    model = new QSqlTableModel(this);


    //для шрифтов
    QStringList fontSizes;

    for (int i = 8; i <= 32; ++i) {
        fontSizes << QString::number(i);
    }
    ui->cmbFontSize->addItems(fontSizes);
    ui->cmbFontSize->setCurrentText("14");
}

MainWindow::~MainWindow()
{
    delete ui;

    delete model;

    delete login;

    disconnect(login, &Login::signal, this, &MainWindow::slot);

}


void MainWindow::on_actionLoginShow_triggered()
{
   login->show();
}


void MainWindow::UpdateAndShow()
{
    try {
    model->select();
    ui->tableView->setModel(model);
    ui->tableView->setStyleSheet("font-family: Times New Roman; font-size: " + ui->cmbFontSize->currentText() + "pt;");
    ui->tableView->resizeColumnsToContents();
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);


    ui->tableView->show();
    } catch (const std::exception& e) {
        QMessageBox::critical(nullptr, "Ошибка", "Шрифт не подходит: " + QString(e.what()));
        return;
    }
}


void MainWindow::on_btnDelete_clicked()
{

    QModelIndexList selectedIndexes = ui->tableView->selectionModel()->selectedIndexes();
    QSet<int> rowsToRemove;


    for (const QModelIndex &index : selectedIndexes) {
        rowsToRemove.insert(index.row());
    }

    bool deleteSuccess = true;


    for (int row : rowsToRemove) {
        if (!model->removeRow(row)) {
            deleteSuccess = false;
            break;
        }
    }


    if (deleteSuccess && model->submitAll()) {
        model->select();
    } else {
        QSqlError err = model->lastError();
        QMessageBox::critical(this, "Ошибка...", "Ошибка при удалении/отправке изменений: " + err.text());
    }


    UpdateAndShow();
}

void MainWindow::slot(QStringList tabName, QStringList view)
{
    if (model) {
        ui->tableView->setModel(nullptr);
        delete model;
        model = nullptr;
    }

    model = new QSqlTableModel();
    ui->btnDelete->setEnabled(true);
    ui->cmbTable->clear();
    ui->cmbView->clear();
    ui->cmbTable->addItems(tabName);
    ui->cmbView->addItems(view);
    on_cmbTable_activated(0);
}



void MainWindow::on_cmbTable_activated(int index)
{
    model->setTable(ui->cmbTable->currentText());
    UpdateAndShow();
}



void MainWindow::on_cmbView_activated(int index)
{
    model->setTable(ui->cmbView->currentText());
    UpdateAndShow();
}



void MainWindow::on_cmbFontSize_currentTextChanged(const QString &arg1)
{
    UpdateAndShow();
}

