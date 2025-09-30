#include<stdio.h>
void main(){
    FILE * file = fopen("D:\\My C\\C Programming\\Age.c","r");
    if(file == NULL){
        printf("Failed To Open The Files.");
        return;
    }

    char buffer[200];
    while(fgets(buffer,sizeof(buffer),file)!=NULL){
        printf("%s",buffer);
    }
    fclose(file);
}