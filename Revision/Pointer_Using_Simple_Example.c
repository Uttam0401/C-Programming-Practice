#include<stdio.h>
void main()
{
    char a = 'x';
    char* ptr = &a;
    printf("Value Of A: %c\n", a);
    printf("Address Of A: %p\n",&a);
    printf("Value Stored In Ptr %p\n",ptr);
    printf("Address Of Pointer ptr: %p\n",&ptr);
    printf("Value Pointed to by ptr: %c\n",*ptr);
    printf("Value Pointed to by ptr: %d\n",*ptr);
    *ptr = 'b';
    printf("Updated Value Of A: %c\n",a);
    printf("Value At Address Of A: %c\n",*ptr);
    printf("Address Of A: %p\n",*(&ptr));
    printf("Address Of A: %p\n",ptr);
    printf("Address Of A: %c\n",**(&ptr));

}