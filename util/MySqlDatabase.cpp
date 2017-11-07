#include "MySqlDatabase.h"

MySqlDatabase::MySqlDatabase() {
    connect();
}

MySqlDatabase::MySqlDatabase(const MySqlDatabase& orig) {
}

MySqlDatabase::~MySqlDatabase() {
}

void MySqlDatabase::connect() {
    driver = get_driver_instance();
    con = driver->connect("tcp://127.0.0.1:3306", "if", "facadeca10");
    con->setSchema("if_");
};

sql::ResultSet* MySqlDatabase::executeQuery(const sql::SQLString& cmd) {
    stmt = con->prepareStatement(cmd);
    res = stmt->executeQuery();
    return res;
}