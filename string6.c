#include<stdio.h>
#include<stdlib.h>
void displayString(char str[]);

int main()
{
	char c[50];
	system("clear");
	printf("\n Enter any string :");
	fgets(c, sizeof(c),stdin);
	displayString(c);
	return 0;
}
void displayString(char c[])
{
	printf("\n string output is :");
	puts(c);

}

