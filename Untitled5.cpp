#include<stdio.h>
int main()
{
	int a[100],i,n;
	printf("enter the size of array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the elements of array %d\n",i+1);
		scanf("%d",&a[i]);
	}
	printf("the even elements of array:");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d\t",a[i]);
		}
		
	}
	printf("the odd elements of array");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==1)
		{
			printf("%d\t",a[i]);
		}
	}
	
	
	
}
