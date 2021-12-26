#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter the element of array %d\n",i+1);
		scanf("%d",&a[i]);
	}
	printf("the elements of array in reverse order:");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
}
