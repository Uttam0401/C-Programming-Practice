//WAP IN C++ TO PRINT SUM OF DIGITS..

#include<iostream>
using namespace std;
  int main()
  {
  	int Num,Sum = 0;
  	cout<<"Enter Any Number:-";
  	cin>>Num;
  	for(;Num > 0;Num= Num/10)
  	{
  		Sum = Sum + Num%10;
	  }
	  cout<<"sumof digits = "<<Sum;
  }
