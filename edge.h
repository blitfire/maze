//
// Created by george on 25/04/24.
//

#ifndef MAZE_EDGE_H
#define MAZE_EDGE_H

struct Cell;

typedef struct Edge {
    unsigned char weight;
    struct Cell* start;
    struct Cell* end;
} Edge;

Edge newEdge(struct Cell* start, struct Cell* end);
void testEdge(Edge* edge);

#endif //MAZE_EDGE_H
