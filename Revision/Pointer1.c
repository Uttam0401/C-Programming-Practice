#include<stdio.h>
  void main()
  {
    int Num = 100;
    //Assign the address of the num to the pointer - ptr
    int* ptr = &Num;
    
    //Print The Value Of Num
    printf("Value of Num = %d\n", Num);

    //Print The Address Of Num Variable
    printf("Address of Num = %p\n", &Num);

    //Print The Value Of Ptr-
    //Which Is Nothing but the address of the Num
    printf("Value Stored In Ptr- = %p\n", ptr);

    //Print The Value at the address of the Num or value at pointer ptr
    printf("Value pointed to by ptr: %d\n", *ptr);

    //Updating The Value At Pointer ptr
    *ptr = 80;

    //Print The Value of num - the value has been updated
    printf("Updated Value Of Num = %d\n", Num);
  }