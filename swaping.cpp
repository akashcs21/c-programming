#include<stdio.h>
int main()
{
	int max,maxi,mini,n,i,min;
	printf("enter the size of erray:");
	scanf("%d",&n);
	int a[n];
	printf("enter the element of array:");
	for(i=0;i<n;i++)
	
	{
		scanf("%d",a[i]);
	}
	max=min=a[0];
	mini=maxi=0;
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			maxi=i;
		}
		else if(min>a[i])
		{
			min=a[i];
			mini=i;
		}
	} 
	a[maxi]=min;
	a[mini]=max;
	printf("updated array %d",a[i]);
	
	
	
	
	
	
}
