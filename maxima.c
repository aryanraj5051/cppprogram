#include<stdio.h>
 
 int main()
 {
    int n,i,a[20],max,min,m,s;
printf("n=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    if(a[i]>m)
    {m=a[i];}
if(a[i]<s)
{s=a[i];}

    

}
printf("%d",m);
printf("\n%d",s);
return 0;
 } 