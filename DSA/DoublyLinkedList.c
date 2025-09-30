#include <stdio.h>
#include <stdlib.h>

// Node structure
typedef struct Node {
    int data;
    struct Node* prev;
	struct Node* next; // Added next pointer for doubly linked list
} Node;

// Stack structure
typedef struct Stack {
    Node* top;
} Stack;

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation error\n");
        return NULL;
    }
    newNode->data = data;
    newNode->prev = NULL;
	newNode->next = NULL; // Initialize next pointer to NULL
    return newNode;
}

// Function to initialize the stack
void initStack(Stack* stack) {
    stack->top = NULL;
}

// Function to check if the stack is empty
int isEmpty(Stack* stack) {
    return stack->top == NULL;
}

// Function to push an element onto the stack
void push(Stack* stack, int data) {
    Node* newNode = createNode(data);
    newNode->prev = stack->top;
    stack->top = newNode;
	if (stack->top->prev != NULL) {
		stack->top->prev->next = stack->top; // Link the previous top node to the new top node
	}
	
    printf("Pushed %d onto the stack\n", data);
}

// Function to pop an element from the stack
int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow\n");
        return -1;
    }
    Node* temp = stack->top;
    int poppedData = temp->data;
    stack->top = stack->top->prev;
    free(temp);
    return poppedData;
}

// Function to peek the top element of the stack
int peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack->top->data;
}

// Function to display the stack elements
void display(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return;
    }
    Node* current = stack->top;
    printf("Stack elements: ");
    while (current) {
        printf("%d ", current->data);
        current = current->prev;
    }
    printf("\n");
}

// Main function to demonstrate stack operations
int main() {
    Stack stack;
    initStack(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    display(&stack);

    printf("Top element is %d\n", peek(&stack));

    printf("Popped element is %d\n", pop(&stack));
    printf("Popped element is %d\n", pop(&stack));
    printf("Popped element is %d\n", pop(&stack));
    printf("Popped element is %d\n", pop(&stack));
    push(&stack, 10);
    push(&stack, 20);
    display(&stack);

    return 0;
}