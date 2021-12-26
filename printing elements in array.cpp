#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter the array elements %d\n",i+1);
		scanf("%d",&a[i]);
		printf("%d\t",a[i]);
	}	
	}
/*	printf("the array elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}*/

