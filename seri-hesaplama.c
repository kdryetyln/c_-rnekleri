#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   int i,n,x;
    float t=0;
    printf("x i giriniz:"); scanf("%d",&x);
    printf("n i giriniz:"); scanf("%d",&n);
     for(i=1;i<=n;i++){
        if(i%2==0)
            t -= pow(x,i)/i;
        else
            t += pow(x,i)/i;
    }
    t= 1-t;
    printf("\nSonuc=%.2f\n",t);
    return 0;
}
