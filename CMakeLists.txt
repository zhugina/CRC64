cmake_minimum_required(VERSION 3.10)
project(CRC64 C)

set(CMAKE_C_STANDARD 11)

set(INCLUDES
    include/crc64.h
)

set(SOURCES
    src/crc64.c
    tests/tests.c
)

add_executable(test_crc64
    ${INCLUDES}
    ${SOURCES}
)
