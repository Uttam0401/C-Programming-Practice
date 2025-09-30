//Write A Program In C++ To Print 1 to 10 With Class and Objects Using (Loops)

#include<iostream>
#include<conio.h>
using namespace std;

class Oneten
{
	public:
	void putdata()
	{
		int i;
		for(i=1;i<=10;i++)
		cout<<"\n"<<i;
	}
};
    int main()
    {
    	Oneten aa;
    	aa.putdata();
    	getch();
    	return 0;
	}
