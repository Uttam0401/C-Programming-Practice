//Write A Demo Program In C++ To Print The Inline Function...

#include<iostream>
#include<conio.h>
using namespace std;
inline int square(int a)
{
    return a*a;
}
inline int cube(int a)
{
    return a*a*a;
}
int main9()
{
    cout<<"\nSquare Of 5 ="<<square(5);
    cout<<"\nCube Of 5 ="<<cube(5);
    
}