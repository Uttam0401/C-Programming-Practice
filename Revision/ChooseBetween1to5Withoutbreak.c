#include<stdio.h>
int main(){
    int Num;
    printf("Enter Number Between[1 to 5] :- ");
    scanf("%d",&Num);
    switch(Num)
    {
        case 1:{
            printf("You Entered Value 1.\n");
           // break;
        }
         case 2:{
            printf("You Entered Value 2.\n");
            //break;
        }
         case 3:{
            printf("You Entered Value 3.\n");
           // break;
        }
         case 4:{
            printf("You Entered Value 4.\n");
            //break;
        }
         case 5:{
            printf("You Entered Value 5.\n");
            //break;
        }
        default:{
            printf("You Did Not Enter Any Value Between 1 And 5.\n");
        }
    }
    return 0;
}