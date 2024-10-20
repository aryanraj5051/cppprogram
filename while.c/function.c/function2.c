#include<stdio.h>
int fact(int a);
int main()
{
    int c,f1=1;
    printf("enter the value of c=");
    scanf("%d",&c);
    f1=fact(c);
    printf("%d",f1);
    int d,f2=1;
    printf("\nenter the value of d=");
    scanf("%d",&d);
    f2=fact(d);
    printf("%d",f2);

    return 0;
}
int fact(int a)
{
    int f=1,i=1;
    for(i=1;i<=a;i++)
    {
        f=f*i;
    
    }
    return f;
}