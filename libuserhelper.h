/*
 * Copyright (c) 2020 Jolla Ltd.
 * Copyright (c) 2020 Open Mobile Platform LLC.
 *
 * All rights reserved.
 *
 * BSD 3-Clause License, see LICENSE.
 */

#ifndef LIBUSERHELPER_H
#define LIBUSERHELPER_H

#include <QString>

class LibUserHelper
{
public:
    LibUserHelper();
    uint addGroup(const QString &group);
    bool removeGroup(const QString &group);
    bool addUserToGroup(const QString &user, const QString &group);
    bool removeUserFromGroup(const QString &user, const QString &group);
    uint addUser(const QString &user, const QString &name, uint guid);
    bool removeUser(uint uid);
    bool modifyUser(uint uid, const QString &newName);
    QString homeDir(uint uid);
    QStringList groups(uint uid);
};

#endif // LIBUSERHELPER_H
