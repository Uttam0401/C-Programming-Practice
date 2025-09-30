 //WAP to print the count of elements.
 //1. Less Than 100
 //2. Greater Than 200 And Less Than Or Equal To 300
 //3. Between 100 and 200
 //4. More Than 300
 #include <stdio.h>
 #include <conio.h>
 int main(){
    int Arr[10];
    int Count1=0,Count2=0,Count3=0,Count4=0;

    for(int i=0;i<10;i++){
        printf("Enter Arrays Elements: ");
        scanf("%d",&Arr[i]);
    }
    printf("Arrays Elements Are:\n-------------------------------- ");
    printf("\n");

    for(int i=0;i<10;i++){
        printf("%d\t",Arr[i]);
    }

    for(int i=0;i<10;i++){
        if(Arr[i] < 100){
            Count1++;
        }
        else if(Arr[i] > 100 && Arr[i] <= 200){
            Count2++;
        }
        else if(Arr[i] > 200 && Arr[i] <= 300){
            Count3++;
        }
        else if(Arr[i] > 300 ) {
            Count4++;
        }
    }
        printf("Less Than 100\n");
        printf("%d\t", Count1);
        printf("\nBetween 100 and 200\n");
        printf("%d\t", Count2);
        printf("\nBetween 200 and 300\n");
        printf("%d\t", Count3);
        printf("Greater Than 300\n");
        printf("%d\t", Count4);
    }
 