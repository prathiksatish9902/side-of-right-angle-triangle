cmake_minimum_required(VERSION 3.16)

project(triangle LANGUAGES C)

add_executable(triangle main.c)

include(GNUInstallDirs)
install(TARGETS triangle
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
