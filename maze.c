//
// Created by george on 27/04/24.
//

#include "maze.h"
#include "cell.h"
#include "edge.h"
#include <stdlib.h>

void initMaze(Maze* maze) {
    int edgeCounter = 0;
    Edge* nextEdge = &maze->edges[edgeCounter];
    initEdge(nextEdge);
    Cell *curr, *down, *right;
    for (int i=0; i < ROWS; i++) {
        for (int j=0; j < COLS; j++) {
            curr = &maze->cells[i][j];

            if (i == 0) curr->open[3] = NULL;
            if (i < ROWS - 1) {
                down = &maze->cells[i + 1][j];
                setDown(curr, down, nextEdge);
                edgeCounter++;
                nextEdge = &maze->edges[edgeCounter];
                initEdge(nextEdge);
            } else curr->open[2] = NULL;

            if (j == 0) curr->open[0] = NULL;
            if (j < COLS - 1) {
                right = &maze->cells[i][j + 1];
                setRight(curr, right, nextEdge);
                edgeCounter++;
                nextEdge = &maze->edges[edgeCounter];
                initEdge(nextEdge);
            } else curr->open[1] = NULL;
        }
    }
}

void findSpanningTree(Maze* maze) {

}