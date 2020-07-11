# CMakeList.txt : CMake project for MahjongGame, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
find_package(SDL2 REQUIRED)
find_package(SDL2_Image REQUIRED)
find_package(SDL2_Mixer REQUIRED)
include_directories(${SDL2_INCLUDE_DIR} ${SDL2_IMAGE_INCLUDE_DIR} ${SDL2_MIXER_INCLUDE_DIR})

# Add source to this project's executable.
add_executable (MahjongGame "MahjongGame.cpp" "MahjongGame.h" "Header.h")

target_link_libraries(${CMAKE_PROJECT_NAME} ${SDL2_LIBRARY}  ${SDL2_IMAGE_LIBRARY} ${SDL2_MIXER_LIBRARY})
# TODO: Add tests and install targets if needed.
