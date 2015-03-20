#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,s1,s2,adet=0;
    printf("Lutfen baslangic ve bitis noktalarini yaziniz : "); scanf("%d %d", &s1,&s2);
    if(s1<s2)
    {
        printf("\nCift sayilar sunlardir : ");
        for(i=s1;i<=s2;i++)
        {
            if(i%2==0)
            {
                printf("%d ", i);
                adet++;
            }
        }
        printf("\nToplam %d adet cift sayi vardir.\n", adet);
    }
    if(s1>s2)
    {
        printf("\nCift sayilar sunlardir : ");
        for(i=s2;i<=s1;i++)
        {
            if(i%2==0)
            {
                printf("%d ", i);
                adet++;
            }
        }
        printf("\nToplam %d adet cift sayi vardir.\n", adet);

    }




    return 0;
}
