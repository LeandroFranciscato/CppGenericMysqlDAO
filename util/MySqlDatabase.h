/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MySqlDatabase.h
 * Author: leandro
 *
 * Created on November 7, 2017, 9:31 AM
 */

#ifndef MYSQLDATABASE_H
#define MYSQLDATABASE_H

#include "mysql_connection.h"
#include <cppconn/driver.h>

class MySqlDatabase {
private:
    sql::Driver *driver;
    sql::Connection *con;
public:
    MySqlDatabase();
    MySqlDatabase(const MySqlDatabase& orig);
    virtual ~MySqlDatabase();
    virtual void connect();
    virtual bool isConnected();
};

#endif /* MYSQLDATABASE_H */

