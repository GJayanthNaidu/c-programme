#include <stdio.h>
int prod (int a, int b)
{
    int c;
    c = a * b;
    return (c);
}
int main ()
{
    int x, y;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Enter the value of y: ");
    scanf("%d",&y);
    int z = prod (x, y);
    printf ("sum is %d",z);
}
