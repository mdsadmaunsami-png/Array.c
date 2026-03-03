#include<stdio.h>
int main()
{
    int a,i,sum=0;
    printf("Enter the size of array: ");
    scanf("%d",&a);
    int num[a];
    for(i=0;i<a;i++)
    {
        printf("Enter value %d: ",i+1);
        scanf("%d",&num[i]);
        sum=sum+num[i];
    }
    printf("Summation of all %d values : %d\n",a,sum);
    return 0;
}
