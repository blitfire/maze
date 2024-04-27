//
// Created by george on 27/04/24.
//

#include "maze.h"

void initMaze(Maze* maze) {
    for (int i=0; i < ROWS; i++) {
        for (int j=0; j < COLS; j++) {
            Cell* curr = &maze->cells[i][j];
            if (i == 0) {
                if (j == 0) {

                    curr->open[1] = initEdge(curr, &maze->cells[i][j+1]);
                }
            }
        }
    }
}