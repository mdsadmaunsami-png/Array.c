#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
    {
        printf("Enter value %d: ",i+1);
        scanf("%d",&num[i]);
        sum=sum+num[i];
    }
    printf("Summation of all %d values : %d\n",n,sum);
    return 0;
}
