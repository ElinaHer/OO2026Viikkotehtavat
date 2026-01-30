cmake_minimum_required(VERSION 3.16)

project(Viikkotehtava_4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Viikkotehtava_4 main.cpp
    asiakas.h asiakas.cpp
    pankkitili.h pankkitili.cpp
    luottotili.h luottotili.cpp)

include(GNUInstallDirs)
install(TARGETS Viikkotehtava_4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
