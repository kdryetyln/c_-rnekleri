#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sayi,x, y, z, t, k;
	printf("5 basamakli bir sayi giriniz : ");  scanf("%d", &sayi);
	printf("------------------------------------\n\n");
	x=sayi/10000;   printf("%d\n", x);
	y=(sayi - 10000*x)/1000;   printf("%d\n", y);
	z=(sayi - (10000*x + 1000*y))/100;  printf("%d\n", z);
	t=(sayi - (10000*x + 1000*y + 100*z))/10;  printf("%d\n", t);
	k=(sayi - (10000*x + 1000*y + 100*z + 10*t));   printf("%d\n\n", k);
	if(x==k && y==t)
	    printf("Girilen %d sayisi palindromedir.\n", sayi);
	else
	    printf("Girilen %d sayisi palindrome degildir.\n", sayi);
	
	return 0;
}
