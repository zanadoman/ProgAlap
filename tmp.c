#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14

int main()
{
    double a = 10.5;
    int b = 4;
    double result = 0;

    printf("\nPélda %d", PI);

    result = a / b;

    printf("\nSzámítás: %f / %d = %,2f", a, b, result); //a osztva b vel kimenete: a/b 2f = 2 tizedes

    KeruletTerulet();
    Calculator();
    karika();

    return 0;
}  
int KeruletTerulet()
{
    int a = 5, b = 10;

    printf("K = %d\n", 2*a + 2*b);
    printf("T = %d\n", a*b);

    return 0;
}
int Calculator()
{
    double a = 0, b = 0;

    printf("Kérem az a értéket: ");
    scanf("%lf", &a); //címképző operátor
    printf("Kérem a b értéket: ");
    scanf("%lf", &b);

    char muvelet;

    printf("Kérem a végrehajtandó műveletet: ");
    scanf("%c", &muvelet);

    switch (muvelet)
    {
    case '+':
        printf("Összadás: %lf", a + b); //%lf double
        break;
    
    case '-':
        printf("Összadás: %d", a + b);
        break;

    case '*':
        printf("Összadás: %d", a + b);
        break;

    case '/':
        printf("Összadás: %d", a + b);
        break;
    default:
        printf("Nem volt értelmezhető a művelet!");
        break;
    }

    return 0;
}
int karika()
{
    double r = 0;
    scanf("%d", &r);

    double result = pow(r, 2) * PI;
    printf("A kör területe: %d", result);

    return 0;
}