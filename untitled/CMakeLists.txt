cmake_minimum_required (VERSION 3.10.2)
get_filename_component(ProjectId ${CMAKE_CURRENT_SOURCE_DIR} NAME)
STRING(REPLACE " " "_" ProjectId ${ProjectId})
project (${ProjectId} C)

set(CMAKE_C_STANDARD 11)

if(WIN32)
    set(DEPS gtk+-3.0)
elseif(APPLE)
    set(DEPS gtk+-3.0 glib-2.0)
else()
    set(DEPS gtk+-3.0)
endif()

FIND_PACKAGE(PkgConfig REQUIRED)

foreach(dep ${DEPS})
    PKG_CHECK_MODULES(${dep} REQUIRED ${dep})
    include_directories(${${dep}_INCLUDE_DIRS})
    LINK_DIRECTORIES(${${DEP}_LIBRARY_DIRS})
endforeach()

if(WIN32)
    set(CMAKE_C_FLAGS_RELEASE -mwindows)
endif()

file(GLOB files "${CMAKE_CURRENT_SOURCE_DIR}/*.c")
add_executable(calculator ${files})
#add_executable(main main.c calculator.c console_ui.c operation.c)
foreach(dep ${DEPS})
    target_link_libraries(calculator ${${dep}_LIBRARIES})
endforeach()
