cmake_minimum_required(VERSION 2.8.4)
set(CMAKE_TOOLCHAIN_FILE ${CMAKE_SOURCE_DIR}/cmake/ArduinoToolchain.cmake)
set(PROJECT_NAME Container_And_Lift)
project(${PROJECT_NAME})

set(${CMAKE_PROJECT_NAME}_SKETCH Container_And_Lift.ino)

#### Uncomment below additional settings as needed.
set(${CMAKE_PROJECT_NAME}_BOARD uno)
set(${CMAKE_PROJECT_NAME}_PORT /dev/ttyUSB1)
set(uno.build.mcu atmega328p)
# set(mega.upload.protocol wiring)
# set(mega.upload.speed 115200)
set(${PROJECT_NAME}_PROGRAMMER arduinoisp)
set(${PROJECT_NAME}_AFLAGS -v)

generate_arduino_firmware(${CMAKE_PROJECT_NAME})
