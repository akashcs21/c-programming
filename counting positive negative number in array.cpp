#include<stdio.h>
int main()
{
	int i,n,p=0,q=0,z=0;
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
		if(a[i]>0)
		{
			p++;
		}
		else if(a[i]<0)
		{
			q++;
		}
		else
		{
			z++;
		}
	}
	  printf("the positive count number in array %d\n",p);
	  printf("the negative count number in array %d\n",q);
	  printf("the zero count number in array %d\n",z);	
}
