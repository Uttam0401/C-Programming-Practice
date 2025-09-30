//Write A Program To Enter 10 Names And Print them Using Loops.
#include <string.h>
#include<stdio.h>
void main(){
    char Names[20];
    char* value;
    for(int i = 1; i <= 10; i++){
        printf("\nPlease Enter The Names:- ");
        fgets(Names,sizeof(Names),stdin);
        value = strtok(Names,"\n");
        printf("Welcome %s\n",Names);
    }
}