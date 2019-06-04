cmake_minimum_required(VERSION 2.8)

project(FakeReader)
find_package(Inkview REQUIRED)
include_directories(${INKVIEW_INCLUDE_DIR})

#Required by Inkview
find_package(Freetype REQUIRED)
include_directories(${FREETYPE_INCLUDE_DIR_freetype2})

add_executable(${PROJECT_NAME} "main.c")

target_link_libraries(${PROJECT_NAME} ${INKVIEW_LIBRARIES})
