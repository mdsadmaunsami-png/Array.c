#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
    {
        printf("Enter value %d: ",i+1);
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("Value %d: %d\n",i+1,num[i]);
    }
    return 0;
}
