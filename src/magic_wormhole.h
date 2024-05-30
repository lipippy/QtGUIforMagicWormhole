#ifndef MAGIC_WORMHOLE_H
#define MAGIC_WORMHOLE_H
#include "qlineedit.h"
#include <QString>
#endif // MAGIC_WORMHOLE_H
namespace wormhole{
QString send(QString FilePath,QString NewName,  QLineEdit * lineEdit);

    bool receive(QString Code);
}
