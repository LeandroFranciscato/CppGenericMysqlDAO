#include <cstdlib>
#include "util/MySqlDatabase.h"

using namespace std;

int main(int argc, char** argv) {
    MySqlDatabase db;    
    sql::ResultSet *res = db.executeQuery("select * from test");
    cout << res <<endl;
}
