#include<stdio.h>
int sum();
void main()
{
int result;
printf("\n going to calculate the sum of two number");
result=sum();
printf("%d",result);

int e;
e=sum();
printf("%d",e);
}
int sum()
{
    int a,b;
    printf("\n enter two number");
    scanf("%d %d",&a,&b);
    return a+b;
}
//int sum()
//{
   // int c,d;
   // print("\n enter two number");
    //scanf("%d %d",&c,&d);
  //  return c+d;
//}

