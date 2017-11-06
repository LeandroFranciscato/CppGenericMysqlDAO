/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MySqlDatabase.cpp
 * Author: leandro
 * 
 * Created on November 6, 2017, 4:21 PM
 */

#include "MySqlDatabase.h"

MySqlDatabase::MySqlDatabase() {
}

MySqlDatabase::MySqlDatabase(const MySqlDatabase& orig) {
}

MySqlDatabase::~MySqlDatabase() {
}

void MySqlDatabase::connect() {
    MySqlDatabase::driver = get_driver_instance();
    /*MySqlDatabase::con = driver->connect("tcp://127.0.0.1:3306", "if", "facadeca11");       
    delete con;*/
}

bool MySqlDatabase::isConnected() {
    return (MySqlDatabase::con != NULL);
}
