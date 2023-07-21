#include<stdio.h>
#include<stdlib.h>
void main()
{
	char c[50];
	system("clear");
	printf("\n Enter any string :");
	fgets(c, sizeof(c),stdin);
	printf("\n  given string is ");
	puts(c);
}
