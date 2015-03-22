#include <stdio.h>
#include <stdlib.h>

int main()
{
    char karakter[10];
    printf("Bir karakter giriniz : "); scanf("%s", &karakter);
    printf("\nKucuk harfli hali    : %s\n",strlwr(karakter));
    return 0;
}
