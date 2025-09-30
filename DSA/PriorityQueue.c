#include<stdio.h>
#include<conio.h>
 
void enqueue();
void dequeue();
void Display();

int queue[10];
int front,rear;
front = -1;
rear = -1;

void enqueue(){
    if(rear == 9){
        printf("Queue Is Full\nOverflow\n");
        return;
    }
    if(front == -1){
        printf("Queu")
    }
}