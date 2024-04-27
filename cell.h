//
// Created by george on 25/04/24.
//

#ifndef MAZE_CELL_H
#define MAZE_CELL_H

#include "edge.h"

typedef struct Cell {
    Edge* open[4];
} Cell;

void setUp(Cell* from, Cell* too, Edge* edge);
void setRight(Cell* from, Cell* too, Edge* edge);
void setDown(Cell* from, Cell* too, Edge* edge);


#endif //MAZE_CELL_H
