#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter the elements of array:%d\n",i+1);
		scanf("%d",&a[i]);
	}
	int value,f=1,c=0;
	printf("enter the value which you want search in array:");
	scanf("%d",&value);
	for(i=0;i<n;i++)
	{
		if(value==a[i])
		{   printf("%d element appeared at position %d\n",value,i+1);
			value=a[i];
			f=1;
			
		}
	}
	if(value!=a[i])
	{
		printf("%d element not found in array",value);
	}
}
	
