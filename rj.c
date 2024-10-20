#include<stdio.h>
#include<conio.h>
int main()
{ 
int x;
printf("x=");
scanf("%d",&x);

    if (x>=90 && x<=100)
    {
        printf("A");
    }
    else if(x>=80 && x<90){
        printf("B");
    }
else if(x>=60 && x<80)
    {
        printf("C");
        }
else if(x<60)
{printf("D");
}
else
{printf("not valid input");
}

return 0;
}