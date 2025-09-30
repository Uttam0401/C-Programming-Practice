//WAP IN C++ TO PRINT REVERSE OF THE GIVEN NUMBERS:-

#include<iostream>
using namespace std;
  int main()
  {
  	int Num,Rev = 0;
  	cout<<"Enter Any Numbers:-";
  	cin>>Num;
  	while(Num > 0){
  	Rev = Rev*10 + (Num % 10);
  	Num = Num/10;
  }
  	cout<<"Reverse of the given Numbers= "<<Rev;
  }
