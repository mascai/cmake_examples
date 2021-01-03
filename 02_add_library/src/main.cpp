#include "lib.h"

#include <iostream>

using namespace std;

int main() {
    cout << "Main()" << endl;
    lib::makeJob();
    cout << "Lib version " << lib::getVersion() << endl;
    return 0;
}
