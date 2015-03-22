#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1, b=1;
    printf("1-10 arasi cift sayilar: \n");

    while(i<=10)
    {
        if(i%2==0)
        {
            printf("%d\n", i);
        }
        i++;
    }
    printf("\n1-10 arasi tek sayilar: \n");

    while(b<=10)
    {
        if(b%2!=0)
        {
            printf("%d\n", b);
        }
        b++;
    }

    return 0;
}
