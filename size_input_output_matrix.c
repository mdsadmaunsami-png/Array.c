#include <stdio.h>
int main()
{
   int row,col;
   printf("Enter the number of rows and columns: ");
   scanf("%d %d",&row,&col);
   int a[row][col];
   for(int i=0;i<row;i++)
   {
       for(int j=0;j<col;j++)
       {
           printf("Enter the value of a[%d][%d]:",i,j);
           scanf("%d",&a[i][j]);
       }
   }
   printf("The matrix is:- \n");
    for(int i=0;i<row;i++)
    {
         for(int j=0;j<col;j++)
         {
             printf("%d ",a[i][j]);
         }
         printf("\n");
    }
    return 0;
}
