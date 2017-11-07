#ifndef MYSQLDATABASE_H
#define MYSQLDATABASE_H

#include "mysql_connection.h"
#include <cppconn/driver.h>
#include <cppconn/prepared_statement.h>
#include <cppconn/resultset.h>

class MySqlDatabase {
private:
    sql::Driver *driver;
    sql::Connection *con;
    sql::PreparedStatement *stmt;
    sql::ResultSet *res;
public:
    MySqlDatabase();
    MySqlDatabase(const MySqlDatabase& orig);
    virtual ~MySqlDatabase();    
    virtual sql::ResultSet* executeQuery(const sql::SQLString& cmd);    
private:    
    virtual void connect();    
};

#endif /* MYSQLDATABASE_H */

