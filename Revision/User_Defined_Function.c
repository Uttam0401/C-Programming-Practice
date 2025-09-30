//Function - Set Of Instructions.
//To Do A Specific Task.
//We Can Re Use The Function Many Numbers Of Times.
//Function Return A Value.
//We Provide Input To Function By Passing Parameters.
//Return Data Type
// <return data type> <Name of Function> (Optional Parameter)
//You Can Divide Your Program In Multiple Sections.

#include<stdio.h>
  int sum(int a, int b)
  {
    int result = 0;
    result = a + b;
    return result;
  }


  void main()
  {
        int a = 10;
        int b = 20;
        int total = 0;
        total = sum(a, b);
        printf("\nThe Sum Is %d\n", total);
  }