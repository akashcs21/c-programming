#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,sum=0,k=0,m,j,l;
	float mean,varience,sd;
	printf("enter the size of array:");
	scanf("%d",&n);
	int a[n];
	printf("enter are the elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	  sum=sum+a[i];	
	}
	 mean=sum/n;
	  for(i=0;i<n;i++)
	  {
	  	k=k+(mean-a[i])*(mean-a[i]);
	  }  
	  varience=k/n;
	  printf("%f",varience);
	  sd=sqrt(varience);
	  printf("the standard deviation is %f",sd);
}
	  
	  
	   
	
	
	
	
	
	
	
	
	
