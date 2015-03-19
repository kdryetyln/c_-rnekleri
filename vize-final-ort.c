#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vize, final, dn;
	printf("Vize notunu giriniz  : ");  scanf("%d", &vize);
	printf("Final notunu giriniz : ");  scanf("%d", &final);
	printf("Devam notunu giriniz : ");  scanf("%d", &dn);
	printf("--------------------------\n\n");
	
	float ort = vize*0.4 + final*0.5 + dn*0.1;
	if(ort>=60)
	{
		printf("Ortalamaniz : %1.f \n", ort);
		printf("Tebrikler gectiniz...\n\n");
	}
	else
	{
		printf("Ortalamaniz : %1.f \n", ort);
		printf("Maalesef kaldiniz...\a\a\a\a\a\a\a\a\a\a\a\a\n\n");
	}
	
	return 0;
}
