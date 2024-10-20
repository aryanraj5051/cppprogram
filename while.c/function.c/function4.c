#include<stdio.h>

int circle(float r)
{
float area;
area=3.14*r*r;

return area;
}
int circle1(int r)
{
float coc;
coc=2*3.14*r;
return coc;
}
int main()
{
    float a,f1,f2;
    printf("enter the value of a");
    scanf("%f",&a);
    f1=circle(a);
    f2=circle1(a);
    printf("%f %f",f1,f2);
    return 0;
}