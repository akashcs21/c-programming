#include <stdio.h>
int main()
{
    int a1,a2,a3;
    printf("enter angles of a triangle");
    scanf("%d%d%d",&a1,&a2,&a3);
    if(a1+a2+a3==180)
    {
        printf("valid");
        
    }
    else
    {
        printf("not valid");
    }
}