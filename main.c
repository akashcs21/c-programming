#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,s=0,i;
    printf("enter the number ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        r=n%i;
        if(r==0)
        s=s+i;
        
    }if(s==n)
    {
        printf("number is perfect");
    }  else
    {
        printf("number is not perfect");
    }
}