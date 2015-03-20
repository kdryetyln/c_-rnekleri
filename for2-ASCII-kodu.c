#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    char b='A',c='a';
    printf("ASCII KOD\tB.KARAKTER\tK.KARAKTER\n");
    for(a=65;a<=84;a++)
    {
        printf("   %d       \t", a);
        if(a<=84)
            printf("     %c       \t     %c\n", b++, c++);

    }

    return 0;
}
