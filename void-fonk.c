#include <stdio.h>
#include <stdlib.h>//rand ve srand in tanimli oldugu kutuphane
#include <time.h>//time in tanimli oldugu kutuphane

void zarat()
{
    srand(time(NULL));//bunu yazmasaydik rand her zaman ayni sayiyi ureticekti bunun sayesinde zamana bagli olarak
    //sectigi sayilari surekli degistiriyo
    int deger = 1+rand()%6;
    printf("%d",deger);
}

int main()
{
    zarat();
    return 0;
}
