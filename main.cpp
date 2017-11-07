#include <cstdlib>
#include "util/MySqlDatabase.h"

using namespace std;

int main(int argc, char** argv) {
    MySqlDatabase db;    
    cout << db.executeQuery("select * from test") <<endl;
}
