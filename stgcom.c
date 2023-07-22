#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	char string1[20],string2[30];
	system("clear");
	printf("\n  enter a string1: ");
	scanf("%s",string1);
	printf("\n Enter a  string2 :");
	scanf("%s",string2);
	if(strcmp(string1,string2) == 0)
	{
		printf("\n Given strings are equal %s %s \n\n\n",string1,string2);
	}
	else
	{
		printf("\n Given String are not Equal %s %s\n\n\n",string1,string2);
	}
}

