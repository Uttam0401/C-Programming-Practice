//Accept the age of 7 student
//Accept one more age to search in the array
//if we find the age in the array then print the msg "i found the record".
//otherwise print the message "Age Not Found".

#include <stdio.h>
int main(){
    int Age[7];
    int AgeSearch;
    int size = sizeof(Age)/sizeof(int);
    int found = 0;

for(int i=0; i<size; i++){
        printf("Enter The Age:- ");
        scanf("%d", &Age[i]);
}
printf("\n");
printf("The Age Are Given Below: ");
for(int i=0; i<size; i++){
    printf("%d\t", Age[i]);
}


    printf("\nPlease Enter Age To Search:- ");
         scanf("%d", &AgeSearch);

printf("\n");
for(int i=0; i<size; i++){
    if(AgeSearch == Age[i]){
        //printf("I Found The Record!\n");
        found++;
        break;
    }
}
if(found == 1){
    printf("Age Are  Found!\n");
}
else{
    printf("Age Are Not Found!\n");
}

}