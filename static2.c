#include<stdio.h>
#include<stdlib.h>
void main()
{

	static int b;
	system("clear");
	b=52;
	printf("\n Default value of auto variable is : %d ",b);
	b=65;
	printf("\n Default value of static is : %d \n ",b);
}
