#include<stdio.h>
#include<math.h>
int main()
{
	int r,b=0,p=1,n;
	printf("enter the decimal number to convert into decimal form");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%2;
		b=b+r*p;
		n=n/2;
		p=p*10;
		
	}
   printf("the binary is %d",b);

return 0;
}