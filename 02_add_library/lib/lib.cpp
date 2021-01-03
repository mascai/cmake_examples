#include "lib.h"
#include "config.h"

#include <iostream>

namespace lib {
    int makeJob() {
        std::cout << "Make job\n";
        return 0;
    }

    int getVersion() {
        return (PROJECT_VERSION);
    }

} // lib
