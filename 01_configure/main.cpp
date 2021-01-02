#include <iostream>
#include "version.h"

using namespace std;


int main() {
    cout << "Project patch version: " << example::getVersion() << endl;   
    cout << "Config variable value: " << example::getConfig() << endl;
    return 0;    
}
