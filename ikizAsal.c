#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Aralarindaki fark 2 olan asal sayilara IKIZ ASALLAR denir.
//Ornek: 3-5, 5-7, 11-13...
//100 000'e kadar olan ikiz asal çiftlerini bulan

bool asalMi(int eleman){
	int i;
	for(i=2;i<eleman;i++){
		if(eleman%i==0) return false;
	}
	return true;
}

int main(int argc, char *argv[]) {
	int i,sayac=0;
	for(i=2;i<100000;i++){
		if(asalMi(i)){
			if(asalMi(i+2)){
				printf("%d-%d\n",i,i+2);
				sayac=sayac+1;
			}
		}
	}
	printf("Toplam ikiz asal çift sayisi: %d",sayac);
	return 0;
}
