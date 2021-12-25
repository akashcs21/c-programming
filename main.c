#include<stdio.h>
int main()
{
    int age;
    printf("enter your age");
    scanf("%d",&age);
    if(age>18)
    {
        printf("you are eligible to vote");
        
    } 
    else
    {  printf("you are not elgible to vote\n");
    age=18-age;
      printf("years are left to vote=%d",age);
    }
}
