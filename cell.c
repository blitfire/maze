//
// Created by george on 25/04/24.
//

#include "cell.h"
#include "edge.h"

void setUp(Cell* from, Cell* too, Edge* edge) {
    initEdge(edge, from, too);
    from->open[0] = edge;
    too->open[2] = edge;
}