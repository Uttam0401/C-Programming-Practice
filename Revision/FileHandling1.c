#include<stdio.h>
void main(){
    FILE * file = fopen("test.txt","w");
    if(file == NULL){
        printf("Failed To Open The File.\n");
        return;
    }
    fprintf(file,"Hello World!\n");
    fprintf(file,"This Is Sample File!\n");
    fprintf(file,"This Is Sample File!\n");
    fclose(file);

    file = fopen("test.txt","r");
    if(file == NULL){
        printf("Failed To Open The File.\n");
        return;
    }
        char buffer[200];
        while(fgets(buffer,sizeof(buffer),file)!=NULL){
            printf("%s","buffer");
        }
        fclose(file);


        file = fopen("test.txt","a");
        if(file == NULL){
            printf("Failed To Open The File.\n");
            return;
        }
        fprintf(file,"Adding More Content In The Files\n");
        fprintf(file,"New Content Is Added\n");
        fclose(file);

        file = fopen("data.txt","r");
        if(file == NULL){
            printf("Failed To Open Files.\n");
            return;
        }

        while(fgets(buffer,sizeof(buffer),file)!=NULL){
            printf("%s",buffer);
        }
        fclose(file);
    }
