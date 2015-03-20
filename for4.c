#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s1,s2,i,adet=0;
    printf("1.sayiyi giriniz : "); scanf("%d", &s1);
    printf("2.sayiyi giriniz : "); scanf("%d", &s2);
    printf("\n---------------------\n");

    if(s1<s2)
    {
        for(i=s1;i<=s2;i++)
        {
            if(i%4==0 && i%7==0)
                {
                    printf("%d ", i);
                    adet++;
                }
        }
    }
    if(s1>s2)
    {
        for(i=s2;i<=s1;i++)
        {
            if(i%4==0 && i%7==0)
                {
                    printf("%d ", i);
                    adet++;
                }
        }
    }
    printf("\nToplam %d adet 7 ve 4 sayilarina bolunebulen sayi vardir.\n",adet,s1,s2);

    return 0;
}
