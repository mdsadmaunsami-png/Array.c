#include<stdio.h>

int main()
{
   int LA[100];
   int n, target, count = 0;
   printf("Enter the number of values: ");
   scanf("%d",&n);
   printf("Enter values: ");
   for(int i = 0; i < n; i++)
   {
      scanf("%d", &LA[i]);
   }
   printf("Enter target: ");
   scanf("%d", &target);

   for(int i = 0; i < n; i++)
   {
      if (LA[i] == target)
      {
         printf("Found: %d %d\n", i, LA[i]);
         count++;
         break;
      }
   }

   if(count == 0)
   {
      printf("Not Found\n");
   }

   return 0;
}


_______________________________________________________


#include <stdio.h>

int main() 
{
    int LA[100];
    int n, target, count = 0;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("Enter values: "); // এই লেখাটি প্রতিবার আসবে
        scanf("%d", &LA[i]);      // এবং প্রতিবার আপনি একটি সংখ্যা দিয়ে Enter চাপবেন
    }

    printf("Enter target: ");
    scanf("%d", &target);

    for(int i = 0; i < n; i++)
    {
        if (LA[i] == target)
        {
            printf("Found: %d %d\n", i, LA[i]);
            count++;
            break;
        }
    }

    if(count == 0)
    {
        printf("Not Found\n");
    }

    return 0;
}
