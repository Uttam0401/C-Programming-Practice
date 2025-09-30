// WAP to Calculate the Area of Triangle.
 #include<stdio.h>
 #include<conio.h>
    int main()
    {
        int Area,b,h;
        printf("Enter the value of b: ");
        scanf("%d",&b);
        printf("Enter the value of h: ");
        scanf("%d",&h);
        Area=b*h*1/2;
        printf("Area of triangle=%d",Area);
        getch();

    }