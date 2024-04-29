//
// Created by george on 27/04/24.
//

#include "maze.h"
#include "cell.h"
#include "edgequeue.h"
#include <stdlib.h>
#include <time.h>

void initMaze(Maze* maze) {
    srand(time(NULL));
    initQueue(&maze->edges, (2*ROWS*COLS) - ROWS - COLS);
    Cell *curr, *down, *right;
    for (int i=0; i < ROWS; i++) {
        for (int j=0; j < COLS; j++) {
            curr = &maze->cells[i][j];
            initCell(curr);

            if (i < ROWS - 1) {
                down = &maze->cells[i + 1][j];
                setDown(curr, down);
                addEdge(&maze->edges, curr, down);
            }

            if (j < COLS - 1) {
                right = &maze->cells[i][j + 1];
                setRight(curr, right);
                addEdge(&maze->edges, curr, right);
            }
        }
    }
    buildMST(&maze->edges);
}