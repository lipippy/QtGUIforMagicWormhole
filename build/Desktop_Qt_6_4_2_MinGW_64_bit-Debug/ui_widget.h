/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QPushButton *btnSend;
    QPushButton *btnReceive;
    QFrame *frame_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *btnSendFolder;
    QLabel *label;
    QPushButton *btnSendFile;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QWidget *page_2;
    QTextEdit *textEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLineEdit *editCode;
    QPushButton *btnReceiveFile;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(592, 437);
        Widget->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: #ffffff;\n"
"}"));
        gridLayout = new QGridLayout(Widget);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        frame = new QFrame(Widget);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(1);
        btnSend = new QPushButton(frame);
        btnSend->setObjectName("btnSend");
        btnSend->setGeometry(QRect(10, 50, 121, 71));
        btnSend->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color:#000000;\n"
"\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(40, 185, 240, 255), stop:0.4 rgba(0, 150, 250, 255), stop:1 rgba(255, 255, 255, 255));\n"
"	border:1px solid rgb(115, 205, 240);\n"
"	border-top-left-radius: 30px; /* \345\267\246\344\270\212\350\247\222\350\256\276\347\275\256\344\270\272\345\234\206\350\247\222 */\n"
"   border-top-right-radius: 12px; /* \345\217\263\344\270\212\350\247\222\350\256\276\347\275\256\344\270\272\345\234\206\350\247\222 */\n"
"   border-bottom-left-radius: 12px; /* \345\267\246\344\270\213\350\247\222\350\256\276\347\275\256\344\270\272\345\234\206\350\247\222 */\n"
"   border-bottom-right-radius: 30px; /* \345\217\263\344\270\213\350\247\222\350\256\276\347\275\256\344\270\272\345\234\206\350\247\222 */\n"
"    \n"
"}"));
        btnReceive = new QPushButton(frame);
        btnReceive->setObjectName("btnReceive");
        btnReceive->setGeometry(QRect(10, 140, 121, 71));
        btnReceive->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton {\n"
"\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.119403 rgba(255, 170, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"    border:1px solid rgb(255, 255, 255);\n"
"    border-top-left-radius: 30px; /* \345\267\246\344\270\212\350\247\222\350\256\276\347\275\256\344\270\272\345\234\206\350\247\222 */\n"
"    border-top-right-radius: 12px; /* \345\217\263\344\270\212\350\247\222\350\256\276\347\275\256\344\270\272\345\234\206\350\247\222 */\n"
"    border-bottom-left-radius: 12px; /* \345\267\246\344\270\213\350\247\222\350\256\276\347\275\256\344\270\272\345\234\206\350\247\222 */\n"
"    border-bottom-right-radius: 30px; /* \345\217\263\344\270\213\350\247\222\350\256\276\347\275\256\344\270\272\345\234\206\350\247\222 */\n"
"}\n"
""));

        horizontalLayout->addWidget(frame);

        frame_2 = new QFrame(Widget);
        frame_2->setObjectName("frame_2");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(5);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy1);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        stackedWidget = new QStackedWidget(frame_2);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(20, 8, 361, 501));
        stackedWidget->setStyleSheet(QString::fromUtf8("QStackedWidget\n"
"{\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        page = new QWidget();
        page->setObjectName("page");
        btnSendFolder = new QPushButton(page);
        btnSendFolder->setObjectName("btnSendFolder");
        btnSendFolder->setGeometry(QRect(200, 300, 90, 30));
        btnSendFolder->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color:#000000;\n"
"\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(40, 185, 240, 255), stop:0.4 rgba(0, 150, 250, 255), stop:1 rgba(255, 255, 255, 255));\n"
"	border:1px solid rgb(115, 205, 240);\n"
"	border-radius: 10px;\n"
"	\n"
"    \n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	color:#ffffff;\n"
"	background-color:rgb(115, 205, 240);\n"
"	border-radius: 10px;\n"
"	padding: 6px 12px;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"	color:#55aaff;\n"
"	background-color:rgb(255, 255, 255);\n"
"	border-radius: 10px;\n"
"	padding: 6px 12px;\n"
"}"));
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 50, 100, 90));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icons/res/send.png")));
        label->setScaledContents(true);
        btnSendFile = new QPushButton(page);
        btnSendFile->setObjectName("btnSendFile");
        btnSendFile->setGeometry(QRect(60, 300, 90, 30));
        btnSendFile->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color:#000000;\n"
"\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(40, 185, 240, 255), stop:0.4 rgba(0, 150, 250, 255), stop:1 rgba(255, 255, 255, 255));\n"
"	border:1px solid rgb(115, 205, 240);\n"
"	border-radius: 10px;\n"
"	\n"
"    \n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	color:#ffffff;\n"
"	background-color:rgb(115, 205, 240);\n"
"	border-radius: 10px;\n"
"	padding: 6px 12px;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"	color:#55aaff;\n"
"	background-color:rgb(255, 255, 255);\n"
"	border-radius: 10px;\n"
"	padding: 6px 12px;\n"
"}"));
        btnSendFile->setAutoDefault(false);
        btnSendFile->setFlat(false);
        textEdit = new QTextEdit(page);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(90, 160, 160, 40));
        QFont font;
        font.setFamilies({QString::fromUtf8("Impact")});
        font.setPointSize(9);
        font.setBold(false);
        textEdit->setFont(font);
        textEdit->setLayoutDirection(Qt::LeftToRight);
        textEdit->setStyleSheet(QString::fromUtf8("QTextEdit \n"
"{\n"
"	border:none;\n"
"}"));
        textEdit->setUndoRedoEnabled(false);
        textEdit->setLineWrapColumnOrWidth(0);
        textEdit->setReadOnly(true);
        lineEdit = new QLineEdit(page);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(30, 240, 280, 25));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        textEdit_2 = new QTextEdit(page_2);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(90, 160, 160, 40));
        textEdit_2->setFont(font);
        textEdit_2->setStyleSheet(QString::fromUtf8("QTextEdit \n"
"{\n"
"	border:none;\n"
"}"));
        textEdit_2->setUndoRedoEnabled(true);
        textEdit_2->setReadOnly(true);
        label_3 = new QLabel(page_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(120, 50, 100, 90));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/icons/res/download.png")));
        label_3->setScaledContents(true);
        lineEdit_3 = new QLineEdit(page_2);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(80, 200, 180, 25));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border:none;\n"
"}"));
        lineEdit_3->setAlignment(Qt::AlignCenter);
        lineEdit_3->setReadOnly(true);
        editCode = new QLineEdit(page_2);
        editCode->setObjectName("editCode");
        editCode->setGeometry(QRect(30, 240, 280, 25));
        editCode->setStyleSheet(QString::fromUtf8("QLineEdit ::placeholder \n"
"{\n"
"	color:gray;\n"
"}\n"
""));
        btnReceiveFile = new QPushButton(page_2);
        btnReceiveFile->setObjectName("btnReceiveFile");
        btnReceiveFile->setGeometry(QRect(125, 300, 90, 30));
        btnReceiveFile->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color:#000000;\n"
"\n"
"\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.119403 rgba(255, 170, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"	border:1px solid rgb(255,170,0);\n"
"	border-radius: 10px;\n"
"	\n"
"    \n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	color:#ffffff;\n"
"	background-color:rgb(255,170,0);\n"
"	border-radius: 10px;\n"
"	padding: 6px 12px;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"	color:#ffaa00;\n"
"	background-color:rgb(255, 255, 255);\n"
"	border-radius: 10px;\n"
"	padding: 6px 12px;\n"
"}"));
        btnReceiveFile->setAutoDefault(false);
        btnReceiveFile->setFlat(false);
        stackedWidget->addWidget(page_2);

        horizontalLayout->addWidget(frame_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(0);
        btnSendFile->setDefault(false);
        btnReceiveFile->setDefault(false);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        btnSend->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        btnReceive->setText(QCoreApplication::translate("Widget", "\346\216\245\345\217\227", nullptr));
        btnSendFolder->setText(QCoreApplication::translate("Widget", "Select Folder", nullptr));
        label->setText(QString());
        btnSendFile->setText(QCoreApplication::translate("Widget", "Select File", nullptr));
        textEdit->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Impact'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei UI'; font-size:18pt; font-weight:700; color:#55aaff;\">\345\217\221\351\200\201\346\226\207\344\273\266</span></p></body></html>", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Impact'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei UI'; font-size:18pt; font-weight:700; color:#ffaa00;\">\346\216\245\346\224\266\346\226\207\344\273\266</span></p></body></html>", nullptr));
        label_3->setText(QString());
        lineEdit_3->setText(QCoreApplication::translate("Widget", "\350\257\267\345\234\250\344\270\213\346\226\271\350\276\223\345\205\245\346\255\243\347\241\256\347\232\204\346\216\245\346\224\266\345\257\206\347\240\201", nullptr));
        editCode->setText(QCoreApplication::translate("Widget", "code", nullptr));
        editCode->setPlaceholderText(QString());
        btnReceiveFile->setText(QCoreApplication::translate("Widget", "Receive File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
