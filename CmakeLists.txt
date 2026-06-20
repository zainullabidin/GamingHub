cmake_minimum_required(VERSION 3.16)
project(GamingHub LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

list(APPEND CMAKE_PREFIX_PATH "/usr/local/Cellar/sfml@2/2.6.2_1")
find_package(SFML COMPONENTS audio system REQUIRED)

include_directories(
    ${CMAKE_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/Connect_04/src
    ${CMAKE_SOURCE_DIR}/leaderboard/src
    ${CMAKE_SOURCE_DIR}/Match_Cards/src
    ${CMAKE_SOURCE_DIR}/RockPaperScissor/src
    ${CMAKE_SOURCE_DIR}/Snake_Ladder/src
    ${CMAKE_SOURCE_DIR}/TicTacToe/src
)

set(SOURCES
    main.cpp

    Connect_04/src/source.cpp
    leaderboard/src/source.cpp
    Match_Cards/src/source.cpp
    RockPaperScissor/src/source.cpp
    Snake_Ladder/src/source.cpp
    TicTacToe/src/source.cpp
)

add_executable(GamingHub ${SOURCES})

if(TARGET SFML::Audio)
    target_link_libraries(GamingHub PRIVATE SFML::Audio SFML::System)
else()
    target_link_libraries(GamingHub PRIVATE sfml-audio sfml-system)
endif()