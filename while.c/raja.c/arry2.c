
#include<stdio.h>
 
int main()
{
int a[20],i,n=5,max,min;
for(i=0;i<=n-1;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
min=a[0];
for(i=1;i<=n-1;i++)
{
    if(max<a[i])
    {
        max=a[i];
    }
    if(min>a[i])
    {
        min=a[i];
    }
}
printf("%d %d",max,min);
return 0;
}