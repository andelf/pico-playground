cmake_minimum_required(VERSION 3.12)

# Pull in PICO SDK (must be before project)
# include(pico_sdk_import.cmake)
include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)

project(playground C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()


add_subdirectory(hello)

# add_executable(hello
#  hello.c
#  )

# Pull in our pico_stdlib which pulls in commonly used features
# target_link_libraries(hello pico_stdlib)

# create map/bin/hex file etc.
# pico_add_extra_outputs(hello)

# add url via pico_set_program_url
# example_auto_set_url(hello)
