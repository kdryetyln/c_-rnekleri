#include <stdio.h>
#include <stdlib.h>

void kutuciz(int boy, int en)
{
    int i,j;
    for(i=0;i<=boy;i++)
    {
        for(j=0;j<=en;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int boy,en;
    printf("Kutunun boyunu giriniz : "); scanf("%d",&boy);
    printf("Kutunun enini giriniz  : "); scanf("%d", &en);
    printf("\n");
    kutuciz(boy,en);
    return 0;
}
