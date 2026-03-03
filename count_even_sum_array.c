#include<stdio.h>
int main()
{
    int a,i,sum=0;
    printf("Enter the size of array: ");
    scanf("%d",&a);
    int num[a],count;
    for(i=0;i<a;i++)
    {
        printf("Enter value %d: ",i+1);
        scanf("%d",&num[i]);
        if(num[i]% 2==0)
        {
            sum=sum+num[i];
            count++;
        }
    }
    printf("Summation of %d values : %d\n",count,sum);
    return 0;
}
