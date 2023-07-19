#include<stdio.h>
#include<stdlib.h>
#define MAXROW 10 
#define MAXCOL 10
void main()
{
   int matrixA[MAXROW][MAXCOL];
   int matrixB[MAXROW][MAXCOL];
   int matrixC[MAXROW][MAXCOL];
   int i,j,r1,c1,r2,r3,c2,c3;
   system("clear");
   printf("\n Enter number of rows in A : ");
   scanf("%d",&r1);
   printf("\n Enter number of columns in A : ");
   scanf("%d",&c1);
   printf("\n Enter number of rows in B : ");
   scanf("%d",&r2);
   printf("\n Enter number of columns in B : ");
   scanf("%d",&c2);
   printf("\n Enter number of rows in C : ");
   scanf("%d",&r3);
   printf("\n Enter number of columns in C : ");
   scanf("%d",&c3);

   printf("\n Enter the matrix Elements in A : \t ");
   for(i=1;i<=r1;i++)
   {
      for(j=1;j<=c1;j++)
      {
         printf("\n Enter Element [%d] [%d]  : ",i,j,j+1);
         scanf("%d",&matrixA[i][j]);
      }
   }
   printf("\n Matrix out is : \n ");
   for(i=1;i<=r1;i++)
   {
      for(j=1;j<=c1;j++)
      {
         printf("%d\t",matrixA[i][j]);
      }
      printf("\n");
   }
   printf("\n Enter the matrix Elements in B : \t ");
   for(i=1;i<=r2;i++)
   {
      for(j=1;j<=c2;j++)
      {
         printf("\n Enter Element [%d] [%d]  : ",i,j,j+1);
         scanf("%d",&matrixB[i][j]);
      }
   }
   printf("\n Matrix out is : \n ");
   for(i=1;i<=r2;i++)
   {
      for(j=1;j<=c2;j++)
      {
         printf("%d\t",matrixB[i][j]);
      }
      printf("\n");
   }printf("\n Enter the matrix Elements in C : \t ");
   for(i=1;i<=r3;i++)
   {
      for(j=1;j<=c3;j++)
      {
         printf("\n Enter Element [%d] [%d]  : ",i,j,j+1);
         scanf("%d",&matrixC[i][j]);
      }
   }
   printf("\n Matrix out is : \n ");
   for(i=1;i<=r3;i++)
   {
      for(j=1;j<=c3;j++)
      {
         printf("%d\t",matrixC[i][j]);
      }
      printf("\n");
   }
   }
