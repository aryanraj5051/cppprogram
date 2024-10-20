#include<stdio.h>
#include<math.h>
int main()
{
    int i,a,b,c,e,sum1,sum2,num1,num2,count=0;
    for(i=1;i<=999;i++)
    {
            b=i/10;
            a=i%10;
            
        while(b<=0)
        {
            c=1;
            e=pow(a,c);
            if(i==e)
            {
                count=count+1;
                printf("\n%d",e);
                }
              b++;
        }
        while(b>0 && b<10)
        {
            c=2;
            sum1=pow(b,c)+pow(a,c);
            if(i==sum1)
            {
                count=count+1;
                printf("\n%d",sum1);
                }

            b=b+9;


        }
        while(b>=10 && b<=99)
        {
            c=3;
           num1=b%10;
           num2=b/10;
           sum2=pow(num1,c)+pow(num2,c)+pow(a,c);
           if(i==sum2)
           {
            count=count+1;
            printf("\n%d",sum2);

            }
           b=b+90;
        }
            
        
    }
    printf("\n%d",count);
    return 0;
    
    
}
