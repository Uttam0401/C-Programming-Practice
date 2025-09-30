#include<stdio.h>

#define MAX_SIZE 5
int stack[MAX_SIZE];
int top = -1;

void push(int item){
    if(top == MAX_SIZE -1){
        printf("Stack overflow & Exit\n");
    }else{
        stack[++top] = item;
        printf("%d Items Inserted.\n", top);
    }
}

void pop(){
    if(top == -1){
        printf("Stack Underflow & Exit\n");
    } else{
        int Item = stack[top--];
        printf("%d Items Deleted.\n", Item);
    }
}

void display(){
    if(top == -1){
        printf("Stack Is Empty\n");
    }else{
        printf("Stack Element: ");
        for(int i = 0; i <= top; i++){
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main(){
    int choice,item;
    printf(" 1.Push \n 2.Pop\n 3.Display\n 4.Exit\n");
    while(1){
        printf("Enter Your Choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1: 
            printf("Enter Value To Push: ");
            scanf("%d", &item);
            push(item);
            break;

        case 2:
             pop()  ; 
             break;
        
        case 3:
            display();
            break;   
            
        case 4:
            return 0;

         default:
         printf("Invalid Choice!\n");
        }
    }
    return 0;
}
