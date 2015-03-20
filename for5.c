#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,s1,s2,n=0,p=0;
    printf("Kac adet sayi gireceksiniz : "); scanf("%d", &s1);
    printf("Sayilar (%d adet) : ", s1);
    for(i=1;i<=s1;i++)
    {
         scanf("%d", &s2);
         if(s2<0) {n++;}
         if(s2>0) {p++;}
    }

    printf("\nGirilen %d sayidan %d i pozitif, %d i negatif.\n",s1,p,n);

    return 0;
}
