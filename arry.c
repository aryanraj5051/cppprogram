#include<stdio.h>
 
int main()
{
int a[20],i,n,max=a[0],j=5,x;
printf("n=");
scanf("%d",&n);
for(i=0;i<=n-1;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<=n-1;j++)
{
for(i=0;i<=n-1-j;i++)
{
    if(a[i]>a[i+1])
    {
        x=a[i];
        a[i]=a[i+1];
        a[i+1]=x;
    }
}
}
for(i=0;i<=n-1;i++)
{
    printf(" %d",a[i]);
}
return 0;
}