//Learn using for loop scope of a variable created inside the for loops.
#include <stdio.h>
int main(){
    
    for(int a=1;a<=10;){
        printf("%d\n",a);
        a++;
    }
    printf("\n I Am Out Of The For Loop\nMy Value Is: %d\n",a);
}

// In This Program thevalue are not print the value of a is in loop scope, this is not print outside of loop.

/*#include <stdio.h>
int main(){
    int a = 1;   
    for(;a<=10;)
    {
        printf("%d\n",a);
        a++;
    }
    printf("\nI Am Out Of The For Loop\nMy Value Is: %d\n",a);
}
*/
