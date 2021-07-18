PROJECT(wingetopt)
cmake_minimum_required(VERSION 3.0)

option(BUILD_SHARED_LIBS "Build the shared library" OFF)

add_definitions(-D_CRT_SECURE_NO_WARNINGS)

if(BUILD_SHARED_LIBS)
  set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
  add_definitions(-DBUILDING_WINGETOPT_DLL -DWINGETOPT_SHARED_LIB)
endif()

add_library(wingetopt src/getopt.c src/getopt.h)

target_include_directories(wingetopt PUBLIC src)

install(FILES src/getopt.h DESTINATION include)

install(TARGETS wingetopt
    RUNTIME DESTINATION bin
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib)

