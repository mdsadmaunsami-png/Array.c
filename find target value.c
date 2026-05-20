#include<stdio.h>
int main()
{
   int LA[]={10,20,30,40,50};
   int target=0,count=0;
   scanf("%d",&target);
   for(int i=0;i<5;i++)
   {
      if (LA[i]==target)
      {
         printf("Found: %d %d\n",i,LA[i]);
         count++;
         break;
      }
   }
   if(count==0)
   {
      printf("Not Found");
   }
   return 0;
}
