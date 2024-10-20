#include<stdio.h>

int main()
{
    int i,a[20],b[20],c[20];
    for(i=0;i<=4;i++)
    { 
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++)
    {
          scanf("%d",&b[i]);
    }
    i=0;
    while(i<=4)
    {
        c[i]=a[i]+b[i];
        printf("\n%d",c[i]);
        i++;

    }
    return 0;
}
