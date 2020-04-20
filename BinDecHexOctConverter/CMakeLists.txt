# Set the minimum version of CMake that can be used
# To find the cmake version run
# $ cmake --version
cmake_minimum_required(VERSION 3.5)

# Set the project name
project (bdoh_convert)

# Create a sources variable with a link to all cpp files to compile
set(SOURCES
    src/main.cpp
    src/ConverterBase.cpp
    src/BinaryConverter.cpp
    src/DecimalConverter.cpp
    src/HexadecimalConverter.cpp
    src/OctalConverter.cpp
    src/NumberBaseConverterFactory.cpp
)

# Add an executable with the above sources
add_executable(bdoh_convert ${SOURCES})

# Set the directories that should be included in the build command for this target
# when running g++ these will be included as -I/directory/path/
target_include_directories(bdoh_convert
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/include
)
message(STATUS ${PROJECT_SOURCE_DIR})
