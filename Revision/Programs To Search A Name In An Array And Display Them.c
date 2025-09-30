//Programs To Search A Name In An Array And Display Them..
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char Name[10][50];
    char NameToSearch[50];
    char* value;
    int found = 0;
    
    for(int i = 0; i <10; i++){
        printf("Please enter your name: ");
        fgets(Name[i],sizeof(Name[i]),stdin);
        value = strtok(Name[i], "\n");
    }
    
    printf("Please enter Name to search:- ");
    fgets(NameToSearch,sizeof(NameToSearch),stdin);
    value = strtok(NameToSearch, "\n");

    printf("\nThe Names Are Given Below\n--------------------------------------------------------");

for(int i = 0; i < 10; i++){
    printf("\n%s",Name[i]);
}
for(int i = 0; i < 10; i++){
    if(strcmp(Name[i],NameToSearch)==0)
    {
        found = 1;
        break;
    }
}
if(found==1){
    printf("\nName Are Found");
}
else{
    printf("\nName Are Not Found");
}

}