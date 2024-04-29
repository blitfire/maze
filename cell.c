//
// Created by george on 25/04/24.
//

#include "cell.h"
#include <stdlib.h>

void initCell(Cell* newCell) {
    *newCell = (Cell) {
        .adjacent = { NULL }
    };
    newCell->isInMST = 0;
}

void setRight(Cell* from, Cell* too) {
    from->adjacent[1] = too;
    too->adjacent[3] = from;
}

void setDown(Cell* from, Cell* too) {
    from->adjacent[2] = too;
    too->adjacent[0] = from;
}