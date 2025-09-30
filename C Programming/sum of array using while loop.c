#include<stdio.h>
int main()
{
int a[10],b[10],s[10],i=0;

printf(" enter first element\n");
while(i<=9)
{
    i=i+1;
scanf("%d",&a[i]);
}
i=0;
printf("enter second element");
while(i<=9)
{
    i=i+1;
scanf("%d",&b[i]);
}
i=0;
while(i<=9)
{
    i=i+1;
s[i]=a[i]+b[i];
printf("%d\t",s[i]);
}

return 0;
}