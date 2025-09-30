//Generate Random Number Using rand and srand function
//Program To Get Current Date And Time In C

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
        printf("%d ", rand());//Generate Random Number Using rand function
    }
    return 0;
}
