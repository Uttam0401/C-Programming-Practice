//SELECT YOUR PREFERRED LANGUAGE
#include<stdio.h>
int main(){
    int Num;
    printf("Please Enter Your Preferred Language[1 t0 3]:-");
    scanf("%d",&Num);
    switch(Num)
    {
    case 1:{
        printf("You Selected Hindi Language");
        break;
    }
        case 2:{
        printf("You Selected English Language");
        break;
    }
    case 3:{
        printf("You Selected Malyalam Language");
        break;
    }
    default:{
        printf("You Selected Wrong Language");
    }
    }
}
