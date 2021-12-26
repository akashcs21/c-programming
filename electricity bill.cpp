#include<stdio.h>
int main()
{
	char a;
	printf("enter the character to check: ");
	scanf("%c",&a);
	if(a>=65&&a<=95||a>=95&&a<=122)
	{
		printf("it is a alphabet");
	}
	else if(a>=48&&a<=57)
	{
		printf("it is a digit");
	}
	else
	{
		printf("it is a special character");
	}
}
