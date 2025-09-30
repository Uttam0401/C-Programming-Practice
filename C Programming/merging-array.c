#include<stdio.h>
int main()
{
    int a[3],b[4],c[7];
    int i,h=0,e=0;
    printf("enter value of a[3],b[4]\n");
    for(i=0;i<=6;i++)
    {
        if(h<=2)
        {
            scanf("%d",&a[h]);
            c[i]=a[h];
            h=h+1;
        }
        else if(e<=3)
        {
            scanf("%d",&b[e]);
            c[i]=b[e];
            e=e+1;
        }
    }
    printf("mergimg of array =\n");
    for(i=0;i<=6;i++)
    {
        printf("c[%d]=%d\n",i,c[i]);
    }
    return 0;
}