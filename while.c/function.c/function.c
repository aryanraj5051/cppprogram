#include<stdio.h>
int fact(int a)
{
    int f=1;
    for(int i=1;i<=a;i++)
    {
        f=f*i;
    }

    return f;
}
int main()
{
    int b,f1=1;
    printf("enter a no");
    scanf("%d",&b);
    f1=fact(b);
    printf("%d",f1);
    
    
    
       int c,f2=1;
    printf("\nenter the value of c");
    scanf("%d",&c);
    f2=fact(c);
    printf("%d",f2);
    return 0;
}