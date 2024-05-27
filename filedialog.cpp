#include "filedialog.h"
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QStringList>
#include <QModelIndex>
#include <QDir>
#include <QDebug>


FileDialog::FileDialog(QWidget *parent): QFileDialog(parent)
{
    setOption(QFileDialog::DontUseNativeDialog);
    setFileMode(QFileDialog::Directory);
    // setFileMode(QFileDialog::ExistingFiles);
    for (auto *pushButton : findChildren<QPushButton*>()) {
        qDebug() << pushButton->text();
        if (pushButton->text() == "&Open" || pushButton->text() == "&Choose") {
            openButton = pushButton;
            break;
        }
    }
    disconnect(openButton, SIGNAL(clicked(bool)));
    connect(openButton, &QPushButton::clicked, this, &FileDialog::openClicked);
    treeView = findChild<QTreeView*>();
}

QStringList FileDialog::selected() const
{
    return selectedFilePaths;
}

void FileDialog::openClicked()
{
    selectedFilePaths.clear();
    qDebug() << treeView->selectionModel()->selection();
    for (const auto& modelIndex : treeView->selectionModel()->selectedIndexes()) {
        qDebug() << modelIndex.column();
        if (modelIndex.column() == 0)
            selectedFilePaths.append(directory().absolutePath() + modelIndex.data().toString());
    }
    emit filesSelected(selectedFilePaths);
    hide();
    qDebug() << selectedFilePaths;
}
