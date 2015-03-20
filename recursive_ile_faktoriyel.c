#include <stdio.h>
#include <stdlib.h>

int fakt(int s)
{
    if(s==0)
        return 1;
    else
        return (s*fakt(s-1));
}

int main()
{
    int s;
    printf("Faktoriyelinin hesaplanmasini istediginiz sayiyi giriniz = "); scanf("%d",&s);
    printf("%d sayisin faktoriyeli = %d",s,fakt(s));
    return 0;
}
