#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter limit to get sum of natural number");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("the sum of natural number is %d",sum);
}