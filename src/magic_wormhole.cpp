#include "magic_wormhole.h"
#include <QDir>
#include <QDebug>
#include <QProcess>
#include <QObject>
const QString command = "wormhole-rs.exe";

void wormhole::send(QString filePath,QString newName,QLineEdit * lineEdit)
{
    QProcess process;
    process.setProgram("wormhole-rs.exe"); // 替换为您的命令行应用程序名称

    QStringList arguments;
    arguments <<"send" <<filePath.toLocal8Bit()<<"--rename"<<newName.toLocal8Bit();
    process.setArguments(arguments);
    QString currentDir = QDir::currentPath();
    currentDir += "/release/core";
    qDebug() << "Current working directory:" << currentDir;
    process.setWorkingDirectory(currentDir);
    // 启动进程
    process.start();

    // 连接 readyReadStandardOutput 信号以获取实时输出
    QObject::connect(&process, &QProcess::readyReadStandardOutput, [&]() {
        QByteArray data = process.readAllStandardOutput();
        qDebug() << "Output: " << data;
        lineEdit->setText("文件传输口令已经复制到您的剪切板");
    });

    // 等待进程完成
    process.waitForFinished();
}

bool wormhole::receive(QString Code,QLineEdit * lineEdit)
{
    QProcess process;
    process.setProgram("wormhole-rs.exe"); // 替换为您的命令行应用程序名称

    QStringList arguments;
    arguments <<"receive" <<Code.toLocal8Bit();
    process.setArguments(arguments);
    QString currentDir = QDir::currentPath();
    currentDir += "/release/core";
    qDebug() << "Current working directory:" << currentDir;
    process.setWorkingDirectory(currentDir);
    // 启动进程
    process.start();

    // 连接 readyReadStandardOutput 信号以获取实时输出
    QObject::connect(&process, &QProcess::readyReadStandardOutput, [&]() {
        QByteArray data = process.readAllStandardOutput();
        qDebug() << "Output: " << data;
        lineEdit->setText(data);
    });

    // 等待进程完成
    process.waitForFinished();
}
