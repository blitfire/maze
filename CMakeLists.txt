cmake_minimum_required(VERSION 3.28)
project(maze C)

set(CMAKE_C_STANDARD 23)

add_executable(maze main.c
        cell.c
        cell.h
        edge.c
        edge.h
        maze.c
        maze.h
        edgequeue.h
        edgequeue.c
)
