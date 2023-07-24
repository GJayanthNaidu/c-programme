#include<stdio.h>
#include<stdlib.h>

int getInteger();

int main()
{
	int n,i,flag=0;
	system("clear");
	n=getInteger();
	if(n==0 || n==1)
		flag=1;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
      printf("\n Given number is not a prime %d\n\n",n);
   else
      printf("\n Given number is prime %d\n\n",n);
}
	int getInteger()
	{
		int n;
		printf("\n Enter any Number : ");
		scanf("%d",&n);
		return n;
	}
