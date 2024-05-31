#ifndef MAGIC_WORMHOLE_H
#define MAGIC_WORMHOLE_H
#include "qlineedit.h"
#include <QString>
#endif // MAGIC_WORMHOLE_H
namespace wormhole{
    void send(QString filePath,QString newName,  QLineEdit * lineEdit);

    bool receive(QString Code,QLineEdit * lineEdit);
}
