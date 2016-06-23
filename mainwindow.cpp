#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"open_db.h"
#include<QSqlQuery>
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    open(db);
    operation=0;
    ui->label->setVisible(false);
    ui->label_2->setVisible(false);
    ui->label_3->setVisible(false);
    ui->label_4->setVisible(false);
    ui->label_5->setVisible(false);
    ui->label_6->setVisible(false);
    ui->label_7->setVisible(false);
    ui->lineEdit->setVisible(false);
    ui->lineEdit_2->setVisible(false);
    ui->lineEdit_3->setVisible(false);
    ui->lineEdit_4->setVisible(false);
    ui->lineEdit_5->setVisible(false);
    ui->lineEdit_6->setVisible(false);
    ui->lineEdit_7->setVisible(false);
    ui->chioceComboBox->setVisible(false);
    ui->ISBNcomboBox->setVisible(false);
    ui->modify->setVisible(false);
    ui->pushButton->setVisible(false);
    ui->delBpt->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_triggered()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();
    ui->lineEdit_6->clear();
    ui->lineEdit_7->clear();
    operation=1;
    ui->label->setText("书名：");
    ui->label_2->setText("ISBN：");
    ui->label_3->setText("出版社：");
    ui->label_4->setText("价格：");
    ui->label_5->setText("库存：");
    ui->label_6->setText("");
    ui->label->setVisible(true);
    ui->label_2->setVisible(true);
    ui->label_3->setVisible(true);
    ui->label_4->setVisible(true);
    ui->label_5->setVisible(true);
    ui->label_6->setVisible(false);
    ui->label_7->setVisible(false);
    ui->lineEdit->setVisible(true);
    ui->lineEdit_2->setVisible(true);
    ui->lineEdit_3->setVisible(true);
    ui->lineEdit_4->setVisible(true);
    ui->lineEdit_5->setVisible(true);
    ui->lineEdit_6->setVisible(false);
    ui->lineEdit_7->setVisible(false);
    ui->chioceComboBox->setVisible(false);
    ui->ISBNcomboBox->setVisible(false);
    ui->modify->setVisible(false);
    ui->pushButton->setVisible(true);
    ui->delBpt->setVisible(false);
    this->setFixedSize(660,500);
    ui->pushButton->setText("添加");
}

void MainWindow::on_action_2_triggered()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();
    ui->lineEdit_6->clear();
    ui->lineEdit_7->clear();
    ui->chioceComboBox->clear();
    operation=2;
    ui->label->setText("请选择ISBN：");
    display_ISBN();
    ui->label_2->setText("请选择修改项：");
    ui->chioceComboBox->addItem("书名");
    ui->chioceComboBox->addItem("出版社");
    ui->chioceComboBox->addItem("价格");
    ui->chioceComboBox->addItem("库存数量");
    ui->chioceComboBox->addItem("售出数量");
    ui->label_4->setText("修改值：");
    ui->label->setVisible(true);
    ui->label_2->setVisible(true);
    ui->label_3->setVisible(false);
    ui->label_4->setVisible(true);
    ui->label_5->setVisible(false);
    ui->label_6->setVisible(false);
    ui->label_7->setVisible(false);
    ui->lineEdit->setVisible(false);
    ui->lineEdit_2->setVisible(false);
    ui->lineEdit_3->setVisible(false);
    ui->lineEdit_4->setVisible(false);
    ui->lineEdit_5->setVisible(false);
    ui->lineEdit_6->setVisible(false);
    ui->lineEdit_7->setVisible(false);
    ui->chioceComboBox->setVisible(true);
    ui->ISBNcomboBox->setVisible(true);
    ui->modify->setVisible(true);
    ui->pushButton->setVisible(true);
    ui->delBpt->setVisible(false);
    this->setFixedSize(660,500);
    ui->pushButton->setText("修改");
}

void MainWindow::on_action_3_triggered()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();
    ui->lineEdit_6->clear();
    ui->lineEdit_7->clear();
    operation=3;
    display_ISBN();
    ui->label->setText("请选择删除图书的ISBN：");
    ui->label->setVisible(true);
    ui->label_2->setVisible(false);
    ui->label_3->setVisible(false);
    ui->label_4->setVisible(false);
    ui->label_5->setVisible(false);
    ui->label_6->setVisible(false);
    ui->label_7->setVisible(false);
    ui->lineEdit->setVisible(false);
    ui->lineEdit_2->setVisible(false);
    ui->lineEdit_3->setVisible(false);
    ui->lineEdit_4->setVisible(false);
    ui->lineEdit_5->setVisible(false);
    ui->lineEdit_6->setVisible(false);
    ui->lineEdit_7->setVisible(false);
    ui->chioceComboBox->setVisible(false);
    ui->ISBNcomboBox->setVisible(true);
    ui->modify->setVisible(false);
    ui->pushButton->setVisible(false);
    ui->delBpt->setVisible(true);
    this->setFixedSize(250,330);
}

void MainWindow::on_action_4_triggered()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();
    ui->lineEdit_6->clear();
    ui->lineEdit_7->clear();
    operation=4;
    display_ISBN();
    ui->label->setText("ISBN:");
    ui->label_2->setText("书名：");
    ui->label_3->setText("出版社：");
    ui->label_4->setText("价格：");
    ui->label_5->setText("库存：");
    ui->label_6->setText("销售数量：");
    ui->label_7->setText("销售金额：");
    ui->label->setVisible(true);
    ui->label_2->setVisible(true);
    ui->label_3->setVisible(true);
    ui->label_4->setVisible(true);
    ui->label_5->setVisible(true);
    ui->label_6->setVisible(true);
    ui->label_7->setVisible(true);
    ui->lineEdit->setVisible(true);
    ui->lineEdit_2->setVisible(true);
    ui->lineEdit_3->setVisible(true);
    ui->lineEdit_4->setVisible(true);
    ui->lineEdit_5->setVisible(true);
    ui->lineEdit_6->setVisible(true);
    ui->lineEdit_7->setVisible(true);
    ui->chioceComboBox->setVisible(false);
    ui->ISBNcomboBox->setVisible(true);
    ui->modify->setVisible(false);
    ui->pushButton->setVisible(true);
    ui->delBpt->setVisible(false);
    this->setFixedSize(660,500);
    ui->pushButton->setText("查询");
}

void MainWindow::on_pushButton_clicked()
{
    QSqlQuery query(db);
    if(operation==0)
    {
        QMessageBox::warning(NULL,"错误","请选择操作！",QMessageBox::Ok);
        return;
    }
    if(operation==1)
    {
        if(ui->lineEdit->text()==""||ui->lineEdit_2->text()==""||ui->lineEdit_3->text()==""
                ||ui->lineEdit_4->text()==""||ui->lineEdit_5->text()=="")
        {
            QMessageBox::warning(NULL,"错误","存在空表项，添加失败！",QMessageBox::Ok);
            return;
        }
         query.prepare("INSERT INTO book VALUES(?,?,?,?,?,'0') ");
         query.addBindValue(ui->lineEdit->text());
         query.addBindValue(ui->lineEdit_2->text());
         query.addBindValue(ui->lineEdit_3->text());
         query.addBindValue(ui->lineEdit_4->text().toFloat());
         query.addBindValue(ui->lineEdit_5->text().toInt());
         if(query.exec())
         {
             QMessageBox::information(NULL,"祝贺","添加成功！",QMessageBox::Ok);
             return;
         }
           QMessageBox::warning(NULL,"错误","添加失败！",QMessageBox::Ok);
    }
    if(operation==2)
    {
        if(ui->modify->text()=="")
        {
            QMessageBox::warning(NULL,"错误","修改未输入，修改未完成！",QMessageBox::Ok);
            return;
        }
        if(ui->chioceComboBox->currentIndex()==0)
            query.prepare("UPDATE book set name=:modify_detail WHERE ISBN=:ISBN");
        if(ui->chioceComboBox->currentIndex()==1)
            query.prepare("UPDATE book set press=:modify_detail WHERE ISBN=:ISBN");
        if(ui->chioceComboBox->currentIndex()==2)
            query.prepare("UPDATE book set price=:modify_detail WHERE ISBN=:ISBN");
        if(ui->chioceComboBox->currentIndex()==3)
            query.prepare("UPDATE book set repertoryNum=:modify_detail WHERE ISBN=:ISBN");
        if(ui->chioceComboBox->currentIndex()==4)
            query.prepare("UPDATE book set soldNum=:modify_detail WHERE ISBN=:ISBN");
        query.bindValue(":modify_detail",ui->modify->text());
        query.bindValue(":ISBN",ui->ISBNcomboBox->currentText());
        if(query.exec())
        {
            QMessageBox::information(NULL,"祝贺","修改成功！",QMessageBox::Ok);
            return;
        }
        QMessageBox::warning(NULL,"错误","修改失败！",QMessageBox::Ok);
    }
    if(operation==4)
    {
        query.prepare("SELECT * FROM book WHERE ISBN=:ISBN");
        query.bindValue(":ISBN",ui->ISBNcomboBox->currentText());
        if(query.exec())
        {
            if(query.next())
            {
                ui->lineEdit_2->setText(query.value(0).toString());
                ui->lineEdit_3->setText(query.value(2).toString());
                ui->lineEdit_4->setText(query.value(3).toString());
                ui->lineEdit_5->setText(query.value(4).toString());
                ui->lineEdit_6->setText(query.value(5).toString());
                float total=query.value(5).toInt()*query.value(3).toFloat();
                ui->lineEdit_7->setText(QString("%1").arg(total));
                return;
            }
        }
    }
}

void MainWindow::display_ISBN()
{
    ui->ISBNcomboBox->clear();
    QSqlQuery query(db);
    query.exec("SELECT ISBN FROM book");
    while(query.next())
    {
        ui->ISBNcomboBox->addItem(query.value(0).toString());
    }
}

void MainWindow::on_delBpt_clicked()
{
    QSqlQuery query(db);
    if(operation==3)
    {
        query.prepare("DELETE FROM book WHERE ISBN=:ISBN");
        query.bindValue(":ISBN",ui->ISBNcomboBox->currentText());
        if(query.exec())
        {
            QMessageBox::information(NULL,"祝贺","删除成功！",QMessageBox::Ok);
            ui->ISBNcomboBox->clear();
            display_ISBN();
            return;
        }
        QMessageBox::warning(NULL,"错误","删除失败！",QMessageBox::Ok);
    }
}

void MainWindow::on_about_triggered()
{
      QMessageBox::information(NULL,tr("Copyright"),tr("tastemiss"),QMessageBox::Ok);
}

void MainWindow::on_help_triggered()
{
    QMessageBox::information(NULL,tr("简介"),tr("一个简单的图书销售管理系统"),QMessageBox::Ok);

}

void MainWindow::on_exit_triggered()
{
    this->close();
}
