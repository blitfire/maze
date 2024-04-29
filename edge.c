//
// Created by george on 25/04/24.
//

#include "edge.h"
#include <stdlib.h>
#include "time.h"
#include "cell.h"

Edge newEdge(struct Cell* start, struct Cell* end) {
    Edge edge = {
            .start=start,
            .end=end,
            .weight=rand() % 128
    };
    return edge;
}

void testEdge(Edge* edge) {
    if (edge->start->isInMST == 0 || edge->end->isInMST == 0) {
        edge->start->isInMST = 1;
        edge->end->isInMST = 1;
        return;
    }
    for (int i=0; i < 4; i++) {
        int inverse = (i+2) % 4;
        if (edge->start->adjacent[i] == edge->end) {
            edge->start->adjacent[i] = NULL;
            edge->end->adjacent[inverse] = NULL;
        }
    }
}