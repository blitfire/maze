//
// Created by george on 25/04/24.
//

#ifndef MAZE_CELL_H
#define MAZE_CELL_H

#include "edge.h"

typedef struct Cell {
    char isInMST;
    struct Cell* adjacent[4];
} Cell;

void initCell(Cell* newCell);
void setRight(Cell* from, Cell* too);
void setDown(Cell* from, Cell* too);

#endif //MAZE_CELL_H
