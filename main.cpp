#include <cstdlib>
#include "util/MySqlDatabase.h"

using namespace std;

int main(int argc, char** argv) {
    MySqlDatabase db;
    db.connect();
    cout << db.isConnected() <<endl;
}
