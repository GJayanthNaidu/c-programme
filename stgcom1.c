#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	char string1[50],string2[50];
	system("clear");
	printf("\n Enter any first string : ");
	scanf("%s",string1);
	printf("\n Enter Any second string : ");
	scanf("%s",string2);
	strcat(string1,string2);
	printf("\n The out put is after concatination %s %s \n\n",string1,string2);
}
