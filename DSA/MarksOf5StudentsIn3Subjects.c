//Enter Marks Of 5 Students in 3 Subjects Using 2D Arrays.
#include<stdio.h>
#include<conio.h>
int main()
{
	int marks[5][3];
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("Enter the marks of student%d of subject%d : ", i + 1, j + 1);
			scanf("%d", &marks[i][j]);
		}
		printf("\n");
	}

	printf("\n*Displaying Marks*\tTotal\n");

	for (int i = 0; i < 5; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", marks[i][j]);
			sum += marks[i][j];
		}
		printf("%d", sum);
		printf("\n");
	}
}
