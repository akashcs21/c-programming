#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter the element of array:%d\n",i+1);
		scanf("%d",&a[i]);
	}
	int value;
	printf("enter the valu which you want to serch");
	scanf("%d",&value);
	int f=0;
	for(i=0;i<n;i++)
	{
	   if(value==a[i])
	   { value=a[i];
	   	f=1;
	    break;
   }
}
if(f==1)
{
	printf("\n%d element is found at positin %d\n",value,i+1);
}
else
{
	printf("%d element is not found",value);
}
}
	
	
	
	
	
	
	
	
	

