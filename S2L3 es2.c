#include<stdio.h>

int main()
{
   int num1;
   int num2;
   float media; 
   printf("Calcoleremo la media di 2 numeri\n");

    printf("Inserire il primo numero:");
    scanf("%d", &num1);

    printf("Inserire il secondo numero:");
    scanf("%d", &num2);

    media = (num1 + num2) /2;
    printf("La media dei numeriè: %2f\n", media);

return 0;
}