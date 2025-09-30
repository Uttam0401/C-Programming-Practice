/*#include<stdio.h>
int main(){
    int Arr[5];
    int temp;
    int i;
    printf("Please enter array elements: ");
    for(int i=0; i<5; i++){
        scanf("%d",&Arr[i]);
    }

    printf("Display The Array Elements:\n");
    for(int i=0; i<5; i++){
        printf("%d",Arr[i]);
    }
    for(int i=0; i<5-1; i++){
        for(int j=0; j<5-i-1; j++){
        if(Arr[j]>=Arr[j+1]){
            temp = Arr[j];
            Arr[j] = Arr[j+1];
            Arr[j+1] = temp;
        }
    }
    }

    printf("\n************After Sorting:****************\n");
    for(int i=0; i<5; i++){
        printf("%d",Arr[i]);
    }
    printf("\n");

    return 0;
}*/


/*#include<stdio.h>
int main(){
    int i,j,Num,temp;
    printf("Enter The Arrays Size: ");
    scanf("%d",&Num);
    int Arr[Num];
    printf("\n");
    printf("Enter Values In Array: ");
    for(i=0; i<Num; i++){
        scanf("%d",&Arr[i]);
    }
    printf("Unsorted Array\n");
    for(i=0; i<Num; i++){
        printf("%d ",Arr[i]);
    }
    for(i=Num; i>0; --i){
        for(j=0;j<i-1;j++){
            if(Arr[j] > Arr[j+1]){
                temp = Arr[j];
                Arr[j] =  Arr[j+1];
                Arr[j+1]=temp;
            }
        }
    }

    printf("\nSorted Result:\n");
    for(i=0; i<Num; i++){
        printf("%d ", Arr[i]);
    }
    return 0;
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

void AcceptInput(int size, int rollnumber[])
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		rollnumber[i] = rand() % 100 + 1;
	}
}
void DisplayData(const int& size, int rollnumber[])
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", rollnumber[i]);
	}
}
void swap(int* i, int* j)
{
	int temp = 0;
	temp = *i;
	*i = *j;
	*j = temp;
}
void OrderByAscending(const int& size, int  rollnumber[])
{
	for (int i = 0; i < size - 1; i++)//1,2,3,4,5,6,
	{
		for (int j = i + 1; j < size; j++)//1,2,3,4,5,6,7,8,
		{
			if (rollnumber[i] > rollnumber[j])
			{
				swap(&rollnumber[i], &rollnumber[j]);
			}
		}
	}
}

void OrderByDescending(const int& size, int  rollnumber[])
{
	for (int i = 0; i < size - 1; i++)//1,2,3,4,5,6,
	{
		for (int j = i + 1; j < size; j++)//1,2,3,4,5,6,7,8,
		{
			if (rollnumber[i] < rollnumber[j])
			{
				swap(&rollnumber[i], &rollnumber[j]);
			}
		}
	}
}

//Enter 10 Numbers in an array and arrange them in ascending order
void main()
{
	const int size = 20;
	int rollnumber[size];//One dimensional array

	AcceptInput(size, rollnumber);

	printf("\n Before Sorting \n");
	DisplayData(size, rollnumber);

	OrderByAscending(size, rollnumber);

	printf("\n After Sorting \n");
	DisplayData(size, rollnumber);

	printf("\nArranging the records in descending order");
	OrderByDescending(size, rollnumber);

	printf("\n After Sorting \n");
	DisplayData(size, rollnumber);

	OrderByAscending(size, rollnumber);

	printf("\n After Sorting \n");
	DisplayData(size, rollnumber);

}