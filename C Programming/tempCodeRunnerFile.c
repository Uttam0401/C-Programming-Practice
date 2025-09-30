#include<stdio.h>
#include<conio.h>
   int main()
   {
    int A[5],i,j,temp,min_index;
    printf("Enter Elements Of Array:-");
    for(i=0;i<=4;i++)
    {
        scanf("\n%d",A[i]);
    }
    printf("Elements Of Array Is:-",A[i]);
    for(i=0;i<=4;i++)
    {
        printf("%d\t",A[i]);
        }
        //Selection Sort Algorithm
        for (i = 0 ; i < 4 ; i++ )
        {
            min_index = i;
            for ( j = i+1 ; j <= 4 ; j++ )
            if ( A [ j ] < A [ min_index ] )
            min_index = j;
        temp = A [ i ];
        A [ i ] = A [ min_index ];
        A [ min_index ] = temp;
        }
        printf ("Sorted array is: \n");
        for ( i = 0 ; i < 4 ; i++ )
        printf ( "%d\t" , A [ i ] );
    
    return 0;
   }