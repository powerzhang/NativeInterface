cmake_minimum_required(VERSION 3.4.1)

set(SOURCE_DIR ${PROJECT_SOURCE_DIR}/src/main/cpp)

aux_source_directory(${SOURCE_DIR} SRC)

add_subdirectory(${SOURCE_DIR}/TinyXml2)

#set(SRC_LIST ${SRC})
add_library(Interface SHARED ${SRC})

target_link_libraries( Interface
                        log
                        TinyXML
                        )