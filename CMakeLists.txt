cmake_minimum_required(VERSION 3.13)

# initialize pico-sdk from GIT
# (note this can come from environment, CMake cache etc)
set(PICO_SDK_FETCH_FROM_GIT on)

# pico_sdk_import.cmake is a single file copied from this SDK
# note: this must happen before project()
include(pico_sdk_import.cmake)

project(example C CXX ASM)

# initialize the SDK
pico_sdk_init()

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# add example code
add_executable(main src/main.c)

# add pico_stdlib library which aggregates commonly used features 
target_link_libraries(main pico_stdlib)

# create extra output files(map/bin/hex).
pico_add_extra_outputs(main)

# add usb serial as standard output
pico_enable_stdio_usb(main 1)