//TWO CASES IN ONE PROGRAM 
#include<stdio.h>
int main(){
    int Num;
    printf("Enter Number Between[1 to 6] :- ");
    scanf("%d",&Num);
    switch(Num)
    {
        case 1:
        case 2:
            printf("You Entered Value 1 or 2.\n");
            break;
        
         case 3:
         case 4:
            printf("You Entered Value 3 or 4.\n");
            break;
        
         
         case 5:
         case 6:
            printf("You Entered Value 5 or 6.\n");
            break;
        
        default:
            printf("You Did Not Enter Any Value Between 1 And 6.\n");
        
    }
    return 0;
}