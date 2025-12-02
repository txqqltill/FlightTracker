cmake_minimum_required(VERSION 3.16)

# Set the target board
set(YAHAL_BOARD "rp2350-launchpad")

# Locate the YAHAL library folder
include(YAHAL_import.cmake)

project(FlightTracker)

add_executable(FlightTracker
    FlightTracker.cpp
    lib/Joystick.cpp
    lib/Drawer.cpp
    lib/cJson.c
)

# Add YAHAL
yahal_add_me(FlightTracker)
yahal_add_library(FlightTracker uGUI)

yahal_add_custom_targets(FlightTracker)
yahal_add_extra_outputs(FlightTracker)
