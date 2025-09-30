#include<stdio.h>
  void main()
  {
    char ch = 'a';
    char* ptr = &ch;
    printf("Address Of Ch Is %p\n", ptr);
    ptr++;
    printf("Value Of ptr After 1st Increment %p\n", ptr);
    ptr++;
    printf("Value Of ptr After 2nd Increment %p\n", ptr);
    ptr++;
    printf("Value Of ptr After 3rd Increment %p\n", ptr);
    
    int Num = 5;
    int* numptr = &Num;
    printf("Address Of Num %p\n", numptr);
    numptr++;
    printf("Value Of Numptr after 1st increment %p\n", numptr);
    numptr++;
    printf("Value Of Numptr after 2nd increment %p\n", numptr);
    numptr++;
    printf("Value Of Numptr after 3rd increment %p\n", numptr);



  }