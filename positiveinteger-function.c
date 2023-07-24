#include<stdio.h>
#include<stdlib.h>
void checkprimenumber ();

int main()
{
	checkprimenumber();
	return 0;
}
void checkprimenumber()
{
	int n,i ,flag=0;
	system("clear");
	printf("\n Enter any Positive number : ");
	scanf("%d",&n);
	if(n==0 ||n==1)
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
	{

		printf("\n THe given number is not a prime number : %d \n\n");
	}
	else
	{
		printf("\n The given number is  prime number  : %d \n\n");
	}

}
