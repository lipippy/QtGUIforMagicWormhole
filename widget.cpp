#include "widget.h"
#include "ui_widget.h"
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QMimeData>
#include <QUrl>
#include <QFileInfo>
#include <QFileDialog>



Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // fileName=new QLineEdit(this);

    // fileName->setGeometry(QRect(200,280,230,25));
    // button=new QPushButton(this);
    // button->setGeometry(QRect(435,280,80,25));
    // button->setText("浏览");



    connect(ui->btnSendFile,SIGNAL(clicked()),this,SLOT(showFiles()));


    ui->stackedWidget->setCurrentIndex(0);
    connect(ui->btnSend, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentIndex(0); // 设置当前页面为第一页（索引从0开始）
    });
    connect(ui->btnReceive, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentIndex(1); // 设置当前页面为第一页（索引从0开始）
    });


    // QVBoxLayout *layout = new QVBoxLayout(this);
    // MyLineEdit *lineEdit=new MyLineEdit(this);
    // layout->addWidget(lineEdit); // 将lineEdit添加到布局中
    // setLayout(layout); // 将布局应用到当前窗口中





    // connect(lineEdit,&QLineEdit::textChanged,this,&Widget::on_lineEdit_textChanged);
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


void Widget::showFiles()
{
    QString str=QFileDialog::getOpenFileName
        (this,"open file","/","textfile(*.txt);;C file(*.cpp);;All file(*.*)");

    ui->lineEdit->setText(str.toUtf8());
}



// void Widget::dragEnterEvent(QDragEnterEvent *event)
// {
//     if (event->mimeData()->hasUrls())
//     {
//         QString filename=event->mimeData()->urls().at(0).fileName();
//         QFileInfo fileInfo(filename);
//         event->acceptProposedAction();
//     }
// }

// void Widget::dropEvent(QDropEvent *event)
// {
//     const QList<QUrl> urls=event->mimeData()->urls();
//     if (urls.isEmpty()) return;

//     QString fileName=urls.first().toLocalFile();
//     // ui->lineEdit->setText(fileName);


//     // if(event->mimeData()->hasUrls())
//     // {
//     //     QList<QUrl> urls=event->mimeData()->urls();

//     //     for(int i=0;i<urls.size();i++)
//     //     {
//     //         qDebug()<<urls.at(i).toLocalFile();
//     //     }
//     // }
// }

