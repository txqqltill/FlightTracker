cmake_minimum_required(VERSION 3.16)

# Set the target board
set(YAHAL_BOARD "wifitick")

# Locate the YAHAL library folder
include(YAHAL_import.cmake)

project(WiFiBoard)

add_executable(WiFiBoard
    WiFiBoard.cpp
)

# Add Arduino libraries
target_link_arduino_libraries(WiFiBoard PRIVATE core)

# This upload target
target_enable_arduino_upload(WiFiBoard)

