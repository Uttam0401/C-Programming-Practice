#include <stdio.h>
union Data
{
	int intValue;
	float floatValue;
	char charValue;
};

void main()
{
	union Data mydata;
	mydata.intValue = 100; //A-65, Z-90, a-97,98,99,d-100, z-122
	printf("\nThe value of intValue is %d", mydata.intValue);
	printf("\nThe value of floatValue is %f", mydata.floatValue);
	printf("\nThe value of charValue is %c", mydata.charValue);
	printf("\nThe size is %lu ", sizeof(mydata));
	printf("\nThe address is %p ", &mydata);

	mydata.floatValue = 200.56;
	printf("\nThe value of intValue is %d", mydata.intValue);
	printf("\nThe value of floatValue is %.2f", mydata.floatValue);
	printf("\nThe value of charValue is %c", mydata.charValue);
	printf("\nThe size is %lu ", sizeof(mydata));
	printf("\nThe address is %p ", &mydata);

	mydata.charValue = 'A';
	printf("\nThe value of charValue is %c", mydata.charValue);
	printf("\nThe value of intValue is %d", mydata.intValue);
	printf("\nThe value of floatValue is %f", mydata.floatValue);
	printf("\nThe size is %lu ", sizeof(mydata));
	printf("\nThe address is %p ", &mydata);
}