### Cmake examples
1. Configure project with help of cmake
![alt text](https://github.com/mascai/cmake_examples/blob/master/cmake_configure.png)

2. Link lib (```target_link_libraries``` example)
3. Use ```cmake .. -DUSE_LOG=1``` to enable USE_LOG option


----
Stages of CMake project
1. Configurations 
  1.1 Creation of targets
  1.2 Filling in properties
  1.3 CMake cache is populated
2. Generation (creating build files e.g. Makefile)
  2.1 Generator expression are expanded
3. Build 
4. Running tests
5. Installation
6. Packaging
