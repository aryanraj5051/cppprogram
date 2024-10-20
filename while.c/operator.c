#include<stdio.h>

int main()
{
    int a,b,result;
    char op;
printf("enter the value of a and b");
scanf("%d %c %d",&a,&op,&b);
switch(op)
{
    case '+':
    result=a+b;
    printf("%d",result);
    break;
    case '-' :
    result=a-b;
    printf("%d",result);
    break ;
    case '*':
    printf("%d",(a*b));
    break;

    default :
    printf("invalid");
}
return 0;
}

