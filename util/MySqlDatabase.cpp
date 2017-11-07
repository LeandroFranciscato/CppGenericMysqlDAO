/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MySqlDatabase.cpp
 * Author: leandro
 * 
 * Created on November 7, 2017, 9:31 AM
 */

#include "MySqlDatabase.h"

MySqlDatabase::MySqlDatabase() {
}

MySqlDatabase::MySqlDatabase(const MySqlDatabase& orig) {
}

MySqlDatabase::~MySqlDatabase() {
}

void MySqlDatabase::connect() {
    driver = get_driver_instance();
    con = driver->connect("tcp://127.0.0.1:3306", "if", "facadeca10");
};

bool MySqlDatabase::isConnected() {
    return con->isValid();
}
