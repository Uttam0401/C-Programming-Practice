#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main()
{
    char name[30];
    int count = 0;
    char* val;
    printf("Enter the string :- ");
    fgets(name, sizeof(name), stdin);
    val = strtok(name, "\n");
    for (int i = 0; i <= 29; i++)
    {
        if (name[i] == '\0')
        {
            break;
        }
        else
        {
            count++;
        }
    }
    printf("The length of count is %d ", count);
}
