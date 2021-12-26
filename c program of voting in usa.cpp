#include<stdio.h>
int main()
{
	int t[10],b[10],s1=0,s2=0,p=0,q=0;
	for(int i=0;i<10;i++)
	{
		printf("enter the vote for triump in state %d\n",i+1);
		scanf("%d",&t[i]);
		printf("enter the vote for bidan in state %d\n",i+1);
		scanf("%d",&b[i]);
		if(t[i]>b[i])
		{
			printf("triump is winner in state %d\n",i+1);
			p++;
			s1=s1+t[i];
		}
		else
		{
			printf("bidan is winner in state %d\n",i+1);
			q++;
			s2=s2+b[i];
			
		}
	}
	  if(p>q)
	  
	    printf("triump is winner in states %d\n",p);
	  else if(p==q)
	  {
	  	 if(s1>s2)
	  	
	  		printf("triump is winner in states %d\n",s1);
		  
	  else if(s1==s2)
	  
	  	printf("reelection");
	  
	  else
	  
	  	printf("bidan is winner in state %d\n",p);}

	  else
	  	printf("bidan is winner in over all state %d\n",s2);
	  }
	
