#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cinsiyet;
    float bboy, aboy, hboy;
    printf("Cocugun cinsiyetini giriniz [E/K]: "); scanf("%c", &cinsiyet);

    if(cinsiyet=='E' || cinsiyet=='e')
    {
        printf("Babasinin boyu (m) : "); scanf("%f", &bboy);
        printf("Annesinin boyu (m) : "); scanf("%f", &aboy);
        printf("\n-------------------------------------\n");

        hboy=(bboy+aboy+0.13)/2.0;
        printf("Hedef boy : %.2f\n", hboy);

        if(hboy==1.75 || hboy==1.76) { printf("Turkiye ortalamasinda olacak. \n\n"); }
        else if(hboy>1.76) { printf("Turkiye ortalamasindan uzun olacak. \n\n"); }
        else { printf("Turkiye ortalamasindan kisa olacak. \n\n"); }
    }

    else if(cinsiyet=='K' || cinsiyet=='k')
    {
        printf("Babasinin boyu (m) : "); scanf("%f", &bboy);
        printf("Annesinin boyu (m) : "); scanf("%f", &aboy);
        printf("\n-------------------------------------\n");

        hboy=(bboy+aboy-0.13)/2.0;
        printf("Hedef boy : %.2f\n", hboy);

        if(hboy==1.63 || hboy==1.64) { printf("Turkiye ortalamasinda olacak. \n\n"); }
        else if(hboy>1.64) { printf("Turkiye ortalamasindan uzun olacak. \n\n"); }
        else { printf("Turkiye ortalamasindan kisa olacak. \n\n"); }
    }
    else
    {
        printf("Lutfen E yada K olarak yaziniz!!!\n");
    }

    return 0;
}
