#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_btnSend_clicked();

    void on_btnReceive_clicked();

    void showFiles();

private:
    Ui::Widget *ui;

    QLineEdit *lineEdit;

    QLineEdit *fileName;

    QPushButton *button;

protected:
    // void dragEnterEvent(QDragEnterEvent *event) override;
    // void dropEvent(QDropEvent *event) override;






};
#endif // WIDGET_H
