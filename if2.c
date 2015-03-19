#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, d;
    float c;

    printf("Saatlik Ucret Giriniz: ");
    scanf("%d", &a);

    printf("\nKac Saat Calismistir: ");
    scanf("%d", &b);

    if(b>40)
    {
        d=(b-40)*a*(1.5);
        c=a*40+d;
    }

    else(c=a*b);


    printf("Ucret: %f", c);


    return 0;
}
