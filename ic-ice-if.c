#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c;
    printf("a, b, c uzunluklarini giriniz : ");  scanf("%d %d %d", &a, &b, &c);
    printf("\n-------------------------------------\n\n");

    if(b+c>a)
    if(a>abs(b-c))
    {
        if(a+c>b)
        if(b>abs(a-c))
        {
            if(a+b>c)
            if(c>abs(a-b))
                printf("Bu bir ucgendir..\n");
                printf("Bu ucgen tipi : ");

                if(a==b)
                    if(c!=b && c!=a)
                        printf("Bu bir ikizkenar ucgendir.\n\n");

                if(b==c)
                    if(a!=c && a!=b)
                        printf("Bu bir ikizkenar ucgendir.\n\n");

                if(c==a)
                    if(b!=c&&b!=a)
                        printf("Bu bir ikizkenar ucgendir.\n\n");

                if(a != b && b != c )
                    if (a != c)
                        printf("Bu bir cesitkenar ucgendir.\n\n");

                if(a==b&&b==c)
                    if(c==a)
                        printf("Bu bir eskenar ucgendir.\n\n");
        }
    }
    else
        printf("Bu bir ucgen degildir..\n");
    return 0;
}
