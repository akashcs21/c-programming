#include<stdio.h>
int main()
{
    int i=1;
    printf("odd numbers are");
    while(i<=100)
    {
        if(i%2!=0)
        printf("%d\n",i);
        i++;
    }
}
