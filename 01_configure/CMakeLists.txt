cmake_minimum_required(VERSION 3.6)

project(Project1 VERSION 0.0.7)

set(MY_CONFIG 123.456)

configure_file(
	config.h.in # configure this fale
	${CMAKE_CURRENT_BINARY_DIR}/config.h # save result to this file
)

set(SOURCES 
	main.cpp
	version.cpp
)

set(HEADERS
    version.h
)
	
add_executable(configure ${SOURCES} ${HEADERS})

set_target_properties(
	configure PROPERTIES
	CXX_STANDARD 17
	CXX_STANDARD_REQUIRED ON
)

target_include_directories(
	configure
	PRIVATE
	${CMAKE_CURRENT_BINARY_DIR}
)
