#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char k_adi[10];
    printf("Kullanici adiniz : "); scanf("%s",&k_adi);
    if(strlen(k_adi)<8)
    {
        printf("En az 8 karakter girmelisiniz.");
    }
    else
    {
        printf("Kayit basarili %s", k_adi);
    }

    return 0;
}
