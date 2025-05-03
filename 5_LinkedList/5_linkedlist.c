#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 5

typedef struct {
    int buffer[BUFFER_SIZE];
    int head;
    int tail;
    int size;
} CircularBuffer;

void initBuffer(CircularBuffer *cb) {
    cb->head = 0;
    cb->tail = 0;
    cb->size = 0;
}

int isFull(CircularBuffer *cb) {
    return cb->size == BUFFER_SIZE;
}

int isEmpty(CircularBuffer *cb) {
    return cb->size == 0;
}

void enqueue(CircularBuffer *cb, int value) {
    if (isFull(cb)) {
        printf("Buffer is full. Cannot enqueue %d\n", value);
        return;
    }
    cb->buffer[cb->tail] = value;
    cb->tail = (cb->tail + 1) % BUFFER_SIZE;
    cb->size++;
}

int dequeue(CircularBuffer *cb) {
    if (isEmpty(cb)) {
        printf("Buffer is empty. Cannot dequeue\n");
        return -1;
    }
    int value = cb->buffer[cb->head];
    cb->head = (cb->head + 1) % BUFFER_SIZE;
    cb->size--;
    return value;
}

void displayBuffer(CircularBuffer *cb) {
    if (isEmpty(cb)) {
        printf("Buffer is empty\n");
        return;
    }
    printf("Buffer contents: ");
    int i = cb->head;
    for (int count = 0; count < cb->size; count++) {
        printf("%d ", cb->buffer[i]);
        i = (i + 1) % BUFFER_SIZE;
    }
    printf("\n");
}

int main() {
    CircularBuffer cb;
    initBuffer(&cb);

    enqueue(&cb, 10);
    enqueue(&cb, 20);
    enqueue(&cb, 30);
    enqueue(&cb, 40);
    enqueue(&cb, 50);

    displayBuffer(&cb);

    printf("Dequeued: %d\n", dequeue(&cb));
    printf("Dequeued: %d\n", dequeue(&cb));

    displayBuffer(&cb);

    enqueue(&cb, 60);
    enqueue(&cb, 70);

    displayBuffer(&cb);

    return 0;
}
