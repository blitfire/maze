//
// Created by george on 25/04/24.
//

#include "edge.h"
#include "stdlib.h"
#include "time.h"

#include "cell.h"

void initEdge(Edge* newEdge) {
    newEdge->weight = rand() % 128;
}

void setEndpoints(Edge* edge, struct Cell* start, struct Cell* end) {
    edge->start = start;
    edge->end = end;
}