#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double kuvvet(int m1, int m2, double r)
{
    double G=6.673,F=G*((double)m1*(double)m2)/(r*r);
    printf("\nCekim kuvveti : %.2lf Newtondur.\n",F);
    return F;
}

int main()
{
    int m1,m2;
    double r;
    printf("Cisimlerin agirliklarini giriniz : "); scanf("%d%d",&m1,&m2);
    printf("Aralarindaki uzakligi giriniz    : "); scanf("%lf",&r);
    kuvvet(m1,m2,r);
    return 0;
}
