#ifndef FILEDIALOG_H
#define FILEDIALOG_H

#include <QFileDialog>
#include <QTreeWidget>
class FileDialog : public QFileDialog
{
    Q_OBJECT
public:
    explicit FileDialog(QWidget *parent = Q_NULLPTR);

    QStringList selected() const;

public slots:
    void openClicked();

private:
    QTreeView *treeView;
    QPushButton *openButton;
    QStringList selectedFilePaths;
};

#endif // FILEDIALOG_H
