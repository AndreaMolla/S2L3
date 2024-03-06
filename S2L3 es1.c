#include<stdio.h>

int main()
{
    int num1;
    int num2;
    int prodotto;

    printf("Calcoliamo il prodotto tra 2 numeri\n");

    printf("Inserire il primo numero:");
    scanf("%d", &num1);

    printf("Inserire il secondo numero:");
    scanf("%d", &num2);

    prodotto = num1 * num2;
    printf("Il risultato è: %d\n", prodotto);

return 0;
}