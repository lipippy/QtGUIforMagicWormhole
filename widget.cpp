#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);


    ui->stackedWidget->setCurrentIndex(0);
    connect(ui->btnSend, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentIndex(0); // 设置当前页面为第一页（索引从0开始）
    });
    connect(ui->btnReceive, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentIndex(1); // 设置当前页面为第一页（索引从0开始）
    });
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btnSend_clicked()
{

}


void Widget::on_btnReceive_clicked()
{

}

