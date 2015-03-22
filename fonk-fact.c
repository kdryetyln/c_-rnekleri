#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int sayi)
{
    int i,f=1;
    for(i=1;i<=sayi;i++)
    {
        f*=i;//f=f*i demek
    }
    return f;
    /*dongu yerine
    if(sayi!=1)
        return sayi*faktoriyel(sayi-1);
        yaparsak daha kolay olay olur
        */
}

int main()
{
    int s1;
    printf("Faktoriyelinin alinmasini istediginiz degeri giriniz : ");
    scanf("%d",&s1);
    printf("\n%d sayisinin faktoriyeli : %d\n",s1,faktoriyel(s1));
    return 0;
}
