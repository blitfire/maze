//
// Created by george on 25/04/24.
//

#include "cell.h"
#include "edge.h"

void setRight(Cell* from, Cell* too, Edge* edge) {
    from->open[1] = edge;
    too->open[3] = edge;
    setEndpoints(edge, from, too);
}

void setDown(Cell* from, Cell* too, Edge* edge) {
    from->open[2] = edge;
    too->open[0] = edge;
    setEndpoints(edge, from, too);
}

void cutUp(Cell* cell) {

}