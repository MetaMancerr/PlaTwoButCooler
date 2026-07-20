#ifndef BOX_H
#define BOX_H

#include <QString>

class Box
{
public:
    bool top = false;
    bool bottom = false;
    bool left = false;
    bool right = false;

    QString owner;
};

#endif // BOX_H