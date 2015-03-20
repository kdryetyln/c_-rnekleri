#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float sure(float ilkhiz, int x)
{
    float toplamsure=2*(ilkhiz*sin(x)/9.80);
    printf("\nCisim %.2f saniye sonra yere duser.\n",toplamsure);
    return toplamsure;
}

int main()
{
    float ilkhiz; int aci;
    printf("Ilk hizi giriniz (m/s) : "); scanf("%f",&ilkhiz);
    printf("Aciyi giriniz (derece) : "); scanf("%f",&aci);
    sure(ilkhiz,aci);
    return 0;
}
