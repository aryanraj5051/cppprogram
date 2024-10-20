#include<stdio.h>
int main()

{
    int i=1;
    int n;
    int s=1;
    printf("n=");
    scanf("%d",&n);
    
    while(i<=n)
    
       { 
         s=s*i;
         
    i=i+1;
       }
        printf("%d",s);
        
    
    return 0;

    
}