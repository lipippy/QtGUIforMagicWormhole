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
    setAcceptDrops(true);


    connect(ui->btnSendFile,SIGNAL(clicked()),this,SLOT(selectFile()));
    connect(ui->btnSendFolder,SIGNAL(clicked()),this,SLOT(selectFolder()));



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


void Widget::selectFile()
{
    QString fileName = QFileDialog::getOpenFileName(this, "选择你要发送的文件", "", "All Files (*.*)");
    ui->lineEdit->setText(fileName.toUtf8());
}

void Widget::selectFolder()
{
    QString fileName = QFileDialog::getExistingDirectory(this, "选择你要发送的文件夹", "All Files (*.*)");
    ui->lineEdit->setText(fileName.toUtf8());
}



void Widget::dropEvent(QDropEvent *event)
{
    const QMimeData *mimeData = event->mimeData();
    if (mimeData->hasUrls())
    {
        // 获取文件路径
        QList<QUrl> urlList = mimeData->urls();
        QString filePath = urlList.first().toLocalFile();

        // 将文件路径显示在lineEdit中
        ui->lineEdit->setText(filePath);

        event->acceptProposedAction();
    }
}



void Widget::dragEnterEvent(QDragEnterEvent *event)
{

    event->acceptProposedAction();

}
