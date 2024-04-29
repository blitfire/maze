//
// Created by george on 28/04/24.
//

#include "edgequeue.h"
#include <stdlib.h>
#include <stdio.h>

void initQueue(EdgeQueue* queue, int size) {
    *queue = (EdgeQueue) {
        .arr=(EdgeQueueNode*) malloc(sizeof(EdgeQueueNode) * size),
        .count=0,
        .head=-1,
        .size=size
    };
    if (queue->arr == NULL) {
        perror("Failed to create queue: Allocation failed.");
        exit(EXIT_FAILURE);
    }
}

void addEdge(EdgeQueue* queue, Cell* start, Cell* end) {
    if (queue->count >= queue->size) {
        fprintf(stderr, "Queue is full. Cannot add more elements.\n");
        return;
    }

    EdgeQueueNode *new = &(queue->arr[queue->count]);
    newNode(new, start, end);
    unsigned char newWeight = new->edge.weight;

    if (queue->head == -1 || newWeight <= queue->arr[queue->head].edge.weight) {
        new->next = queue->head;
        queue->head = queue->count++;
        return;
    }

    int curr = queue->head;
    int next = queue->arr[curr].next;
    while (next != -1 && (newWeight > queue->arr[next].edge.weight)) {
        curr = next;
        next = queue->arr[curr].next;
    }

    new->next = next;
    queue->arr[curr].next = queue->count++;
}

void buildMST(EdgeQueue* queue) {
    for (int i=queue->head; i != -1; i=queue->arr[i].next) {
        testEdge(&queue->arr[i].edge);
    }
    free(queue->arr);
}

void newNode(EdgeQueueNode *node, Cell* start, Cell* end) {
    node->edge = newEdge(start, end);
    node->next = -1;
}

void printQueue(EdgeQueue* queue) {
    for (int i=queue->head; i != -1; i=queue->arr[i].next) {
        printf("%d ", queue->arr[i].edge.weight);
    }
}