#include<stdio.h>

int swap(int a,int b)
{
    int num;
    num=a;
    a=b;
    b=num;
    printf("%d %d",a,b);
    return num;
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    swap(x,y);
   // printf("%d %d",x,y);
    return 0;
}