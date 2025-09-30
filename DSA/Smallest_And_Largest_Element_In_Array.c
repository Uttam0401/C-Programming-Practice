//Program To Find The Smallest And Largest Elements Of The Array.
#include<stdio.h>
int main()
{
    int Arr[5];

    for (int i = 0; i <5; i++) {
        printf("Plz Enter Numbers\n");
        scanf("%d", &Arr[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("\nThe Array Elements Is :-");
        printf("\n%d", Arr[i]);
    }
    int Val1 = Arr[0];
    int Val2 = Arr[0];
    for (int i = 0; i < 5; i++) {
    if (Val1 > Arr[i] ) {
      Val1 = Arr[i];
    }
   if (Val2 < Arr[i]) {
       Val2 = Arr[i];
       }
    }
    printf("\n");
    printf("The Smallest Array Element = %d", Val1);
   printf("\nThe Largest Array Element = %d", Val2);

}
