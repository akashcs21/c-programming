#include<stdio.h>
int main()
{
    int firstnum,secondnum;
    int product=0,i;
    printf("enter the number");
    scanf("%d%d",&firstnum,&secondnum);
    for(i=1;i<=secondnum;i++){
        product+=firstnum;
        
    }printf("%d",product);
}