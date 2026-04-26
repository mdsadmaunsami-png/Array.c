#include<stdio.h>
int main ()
{
    int n, i ;
    printf("Enter the size of a array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter %d element: ",i+1);
        scanf("%d",&a[i]);
    }
    int max= a[0];
    for( i=1;i<n;i++)
    {
         if( a[i] > max )
        {
             max=a[i];
        }
    }
    printf("the largest one is : %d",max);
    return 0;
}
