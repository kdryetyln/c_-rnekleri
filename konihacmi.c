#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//koninin hacmini bulma
	int y,c;
	printf("Yuskeklik degerini giriniz: ");
	scanf("%d", &y);
	printf("Cap degerini giriniz: ");
	scanf("%d", &c);
	float pi=3.14 , hacim;
	hacim=(1.00/3.00)*pi*(float)c/2.0*(float)c/2.0*(float)y;
	printf("Koninin hacmi : %.2f", hacim);
	
	return 0;
}
