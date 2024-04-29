//
// Created by george on 28/04/24.
//

#ifndef MAZE_EDGEQUEUE_H
#define MAZE_EDGEQUEUE_H

#include "edge.h"
#include "cell.h"

typedef struct EdgeQueueNode {
    Edge edge;
    int next;
} EdgeQueueNode;

typedef struct EdgeQueue {
    EdgeQueueNode *arr;
    int count;
    int head;
    int size;

} EdgeQueue;

void initQueue(EdgeQueue* queue, int size);
void addEdge(EdgeQueue* queue, Cell* start, Cell* end);
void buildMST(EdgeQueue* queue);
void deleteQueue(EdgeQueue* queue);
void printQueue(EdgeQueue* queue);

void newNode(EdgeQueueNode *node, Cell* start, Cell* end);

#endif //MAZE_EDGEQUEUE_H
