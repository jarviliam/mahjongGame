# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project(MahjongGame)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")
set(BIN_DIR ${MahjongGame_SOURCE_DIR}/bin)

find_package(SDL2 REQUIRED)
find_package(SDL2_Image REQUIRED)
find_package(SDL2_Mixer REQUIRED)
include_directories(${SDL2_INCLUDE_DIR} ${SDL2_IMAGE_INCLUDE_DIR} ${SDL2_MIXER_INCLUDE_DIR})

include_directories(MahjongGame)

add_library(imgui "./MahjongGame/imgui/imgui.cpp""./MahjongGame/imgui/imgui_draw.cpp" "./MahjongGame/imgui/imgui_widgets.cpp" "MahjongGame/MenuManager.h" "MahjongGame/MenuManager.cpp")

file(GLOB_RECURSE MahjongGame_SOURCES "MahjongGame/*.cpp")
add_executable (MahjongGame ${MahjongGame_SOURCES} "MahjongGame/Menu.h" "MahjongGame/Menu.cpp" "MahjongGame/MainMenu.h" "MahjongGame/MainMenu.cpp" "MahjongGame/MenuOption.h" "MahjongGame/MenuOption.cpp" "MahjongGame/MenuManager.h" "MahjongGame/MenuManager.cpp")
target_link_libraries(MahjongGame ${SDL2_LIBRARY} ${SDL2_IMAGE_LIBRARY} ${SDL2_MIXER_LIBRARY})
target_include_directories(imgui PUBLIC ${SDL2_INCLUDE_DIRS})
target_include_directories(imgui PUBLIC ./MahjongGame/imgui/ ./MahjongGame/imgui/examples/)
target_compile_definitions(imgui PUBLIC IMGUI_IMPL_OPENGL_LOADER_CUSTOM=<SDL_opengl.h>  GL_GLEXT_PROTOTYPES=1)
target_link_libraries(MahjongGame imgui)
install(TARGETS MahjongGame RUNTIME DESTINATION ${BIN_DIR})

