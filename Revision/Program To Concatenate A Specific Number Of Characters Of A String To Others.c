//Program To Concatenate A Specific Number Of Characters Of A String To Others.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
  int main()
  {
    char Name1[50];
    char Name2[50];
    char* value;
    printf("Please Enter Your First Names:- ");
    fgets(Name1, sizeof(Name1),stdin);
    value = strtok(Name1, "\n");

    printf("Please Enter Your Second Names:- ");
    fgets(Name2, sizeof(Name2),stdin);
    value = strtok(Name2, "\n");

    printf("\nBefore Concatenating");
    printf("The Value Of Name Is %s \n The Value Of Name2 Is %s \n", Name1, Name2);
    strcat(Name1," ");
    strncat(Name1, Name2,4);

    printf("\nAfter Concatenating");
    printf("The Value Of Name Is %s \n The Value Of Name2 Is %s \n", Name1, Name2);

  }