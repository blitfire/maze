//
// Created by george on 25/04/24.
//

#ifndef MAZE_EDGE_H
#define MAZE_EDGE_H

#include "cell.h"

typedef struct Edge {
    char minimumSpanning;
    unsigned char weight;
    Cell endpoints[2];
} Edge;

void initEdge(Edge* newEdge, Cell *endpoints);

#endif //MAZE_EDGE_H
