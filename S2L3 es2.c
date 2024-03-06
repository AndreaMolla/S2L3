#include <stdio.h> 

int unElemento(){
    return 0;
}

int dueElementi()
{
    int a, b, c;
    printf("\nInserisci intero 1:");
    scanf("%lf", &a);
    printf("\nInserisci intero 2:");
    scanf("%lf", &b);
    printf("\nScrivi 1 per somma\n2 per moltiplicare\n3 divisione\n4 resto\n5potenza")
    scanf("%d", &scelta)
    switch (scelta)
    {
    case 1:
        printf("la Somma è:%d\n",(int)a+ (int)b;
        break;
    
    default:
        break;
    }
    return 0;
}

int treElementi()
{
    int a, b, c;
    printf("\nInserisci intero 1:");
    scanf("%d", &a);
    printf("\nInserisci intero 2:");
    scanf("%d", &b);
    printf("\nInserisci intero 3:");
    scanf("%d", &c);
    printf("\nLa somma dei tre numeri è: %d", a+b+c);
    return 0;
}


int main() 
{   
    int input;
    printf("Su quanti numeri vuoi operare da 1 a 3? ");
    scanf("%d", &input);
    printf("************************\n");
    switch (input)
    {
    case 1:
        unElemento();
        break;
    case 2:
        dueElementi();
    case 3:
        treElementi();        
    default:
        printf("\nHo detto da 1 a 3!\n");
        break;
    }
}

