#include <stdio.h>

int main() 
{
    int N;
    scanf("%d", &N);
    if (N <= 0) 
    {
        return 0;
    }
    printf("%d\n", N);
    int temp = N;
    int banknotes[] = {100, 50, 20, 10, 5, 2, 1};
    int total_notes = 7;
    for (int i = 0; i < total_notes; i++) 
    {
        int count = temp / banknotes[i];
        temp = temp % banknotes[i];
        printf("%d nota(s) de R$ %d,00\n", count, banknotes[i]);
    }
    return 0;
}
