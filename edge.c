//
// Created by george on 25/04/24.
//

#include "edge.h"

void initEdge(Edge* newEdge, Cell *endpoints) {
    newEdge->endpoints[0] = endpoints[0];
    newEdge->endpoints[1] = endpoints[1];
    newEdge->weight = 1;
    newEdge->minimumSpanning = 0;
}