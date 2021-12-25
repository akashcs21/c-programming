#include<stdio.h>
int main()
{
	int n,i,d[n];
	printf("enter the size of array:");
	scanf("%d",&n);
	int a[n];
	printf("enter %d number of elements in array:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int large=0,small;
	for(i=0;i<n;i++)
	{
		if(large<a[i])
		large=a[i];	
		else
		small=a[i];
	} 
	
	for(i=0;i<n;i++)
	{
	  d[i]=large;
	  small=d[i];
	d[i]=small;
	large=d[i];
}
for(i=0;i<n;i++)
{
	printf("%d",d[i]);
}	
}
