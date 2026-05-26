#include<stdio.h>
int main()
{
    float tk;
    scanf("%f",&tk);
    if( tk <= 0 )
    {
        return 0;
    }
    int totalcents=(int)(tk * 100 + 0.5);

    printf("NOTAS:\n");

    int banknotes[]={10000,5000,2000,1000,500,200};
    for(int i=0;i<6;i++)
    {
        int count = totalcents / banknotes[i];
        totalcents = totalcents % banknotes[i];
        printf("%d nota(s) de R$ %d.00\n",count,banknotes[i] / 100 );
    }

    printf("MOEDAS:\n");
    int bankcoins[]={100,50,25,10,5,1};
    for(int i=0;i<6;i++)
    {
        int count = totalcents / bankcoins[i];
        totalcents = totalcents % bankcoins[i];
        printf("%d moeda(s) de R$ %.2f\n",count,bankcoins[i]*1.0 / 100);
    }
    return 0;
}
