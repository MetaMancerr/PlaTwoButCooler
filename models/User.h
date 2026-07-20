#ifndef USER_H
#define USER_H

#include <QString>

class User
{
private:
    QString name;
    QString username;
    QString email;
    QString phone;
    QString passwordHash;

public:
    User();
};

#endif // USER_H