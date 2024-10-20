#include<stdio.h>

int fact(int a)
{
    int f=1,i=1;
    for(i=1;i<=a;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int f1=1,c;
    printf("enter the value of c");
    scanf("%d",&c);
    f1=fact(c);
    printf("%d",f1);
return 0;

}