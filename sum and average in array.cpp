#include<stdio.h>
int main()
{
	int i,n,sum=0;
	float avg;
	printf("enter the size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter the elements of array %d\n",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/n;
	printf("the sum of array elements is %d\n",sum);
	printf("the average of array elements is %f",avg);
	
}
