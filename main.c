#include<stdio.h>
int main()
{
    int s1,s2,s3,equal,isoscales;
    printf("enter three side of a triangle");
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1==s2&&s2==s3&&s3==s1)
    {
        printf("triangle is equal ");
    }
    else if(s1==s2&&s1!=s3)
    {
        printf("triangle is isoscale");
    }
else
{
    printf("trianlge is scalen");
}
}