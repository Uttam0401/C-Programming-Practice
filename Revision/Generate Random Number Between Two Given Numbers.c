//Generate Random Number Between Two Given Numbers.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));// set seed based on current time
    printf("%ld\n",time(NULL));//Unix timestamp
    time_t currentTime = time(NULL);
    printf("Current Time: %s\n", ctime(&currentTime));//Current time And Date.
    for(int i=0; i<10; i++)
    {
        //Generate random number between 1 and 99
        printf("%d ", rand()%100 + 1);//Generate Random Number Using rand function
    }
    return 0;
}


