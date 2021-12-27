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
	int large=a[0];
	int small=a[0];
	for(i=n-2;i>=0;i--)
	{
		if(large<a[i])
		{
		large=a[i];
	}
	else
	{
		small=a[i+1];
	}
	}
	printf("second largest element is %d\n",large);
	printf("second smallest element of array %d",small);
}
