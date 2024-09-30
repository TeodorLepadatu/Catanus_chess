cmake_minimum_required(VERSION 3.28)
project(Chess_with_catan)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Chess_with_catan
        main.cpp
        README.md
        Board.cpp
        Abstract_piece.h
        King.h
        Abstract_piece.cpp
        Bishop.cpp
        Card.cpp
        Dice.cpp
        King.cpp
        Knight.cpp
        Pawn.cpp
        Robber.cpp
        Rook.cpp
        Player.h
        Game.h
        Game.cpp
        Player.cpp)
