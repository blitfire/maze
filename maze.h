//
// Created by george on 27/04/24.
//

#ifndef MAZE_MAZE_H
#define MAZE_MAZE_H

#define ROWS 10
#define COLS 10

#include "cell.h"
#include "edge.h"

typedef struct Maze {
    Cell cells[ROWS][COLS];
} Maze;

void initMaze(Maze* maze);

#endif //MAZE_MAZE_H
