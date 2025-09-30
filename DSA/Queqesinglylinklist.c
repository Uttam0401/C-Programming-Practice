#include <stdio.h>
#include <stdlib.h>

// Node structure
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Queue structure
typedef struct Queue {
    Node* front;
    Node* rear;
} Queue;

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation error\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to initialize the queue
void initQueue(Queue* queue) {
    queue->front = NULL;
    queue->rear = NULL;
}

// Function to check if the queue is empty
int isEmpty(Queue* queue) {
    return queue->front == NULL;
}

// Function to enqueue an element to the queue
void enqueue(Queue* queue, int data) {
    Node* newNode = createNode(data);
    if (isEmpty(queue)) {
        queue->front = newNode;
        queue->rear = newNode;
    }
    else {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
    printf("Enqueued %d to the queue\n", data);
}

// Function to dequeue an element from the queue
int dequeue(Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue underflow\n");
        return 0;
    }
    Node* temp = queue->front;
    int dequeuedData = temp->data;
    queue->front = queue->front->next;
    if (queue->front == NULL) {
        queue->rear = NULL;
    }
    free(temp);
    return dequeuedData;
}

// Function to get the front element of the queue
int front(Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return 0;
    }
    return queue->front->data;
}

// Function to display the queue elements
void display(Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return;
    }
    Node* current = queue->front;
    printf("Queue elements: ");
    while (current) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Main function to demonstrate queue operations
int main() {
    Queue queue;
    initQueue(&queue);

    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);

    display(&queue);

    printf("Front element is %d\n", front(&queue));

    printf("Dequeued element is %d\n", dequeue(&queue));
    printf("Dequeued element is %d\n", dequeue(&queue));
    printf("Dequeued element is %d\n", dequeue(&queue));
    printf("Dequeued element is %d\n", dequeue(&queue));
    
    display(&queue);

    return 0;
}