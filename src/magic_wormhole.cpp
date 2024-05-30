#include "magic_wormhole.h"
#include <QDir>
#include <QDebug>
#include <QProcess>
#include <QObject>
const QString command = "wormhole-rs.exe";

QString wormhole::send(QString FilePath,QString NewName,QLineEdit * lineEdit)
{
    // 创建一个 QProcess 对象
    QProcess process;
    QString currentDir = QDir::currentPath();
    currentDir += "/release/core";
    qDebug() << "Current working directory:" << currentDir;
    process.setWorkingDirectory(currentDir);
    qDebug()<<"process.setWorkingDirectory(currentDir)";

    QStringList arguments;
    arguments <<"send" <<FilePath.toLocal8Bit()<<"--rename"<<NewName.toLocal8Bit();

    // 设置 QProcess 的输出模式
    process.setProcessChannelMode(QProcess::MergedChannels);

    // 启动进程
    process.start(command, arguments);

    // 连接 readyReadStandardOutput() 信号
    QFileDevice::connect(&process, &QProcess::readyReadStandardOutput, &process, [&]() {
        // 获取实时输出
        QString output = process.readAllStandardOutput();
        qDebug() << "Command output: " << output;
        lineEdit->setText(output);
    });

    // 等待进程完成
    if (!process.waitForFinished(1000000)) {
        qDebug() << "Process error: " << process.errorString();
        return "";
    }
    return "";
}

bool wormhole::receive(QString Code)
{
    // 创建一个 QProcess 对象
    QProcess process;
    QString currentDir = QDir::currentPath();
    currentDir += "/release/core";
    qDebug() << "Current working directory:" << currentDir;
    process.setWorkingDirectory(currentDir);
    qDebug()<<"process.setWorkingDirectory(currentDir)";

    QStringList arguments;
    arguments <<"receive" <<Code;

    // 设置 QProcess 的输出模式
    process.setProcessChannelMode(QProcess::MergedChannels);

    // 启动进程
    process.start(command, arguments);

    // 连接 readyReadStandardOutput() 信号
    QFileDevice::connect(&process, &QProcess::readyReadStandardOutput, &process, [&]() {
        // 获取实时输出
        QString output = process.readAllStandardOutput();
        qDebug() << "Command output: " << output;
    });

    // 等待进程完成
    if (!process.waitForFinished(1000000)) {
        qDebug() << "Process error: " << process.errorString();
        return "";
    }

    return true;
}
