#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


// Kendisi disindaki b�t�n pozitif bolenleri toplami sayinin kendisine esit olan sayilara MUKEMMEL sayilar denir. 
// Ornek: 6'yi tam bolen sayilar 1,2 ve 3t�r. B�lenlerin toplami 1+2+3=6 gibi
// Buna g�re 100 000'e kadar ka� tane m�kemmel sayi vardir?

int bolen(int eleman){
	int i=2, toplam=1;
	for(i=2;i<eleman;i++){
		if(eleman%i==0)toplam=toplam+i;
	}	
	if(eleman==toplam)return 1;
	else{ return 0;	}
}

int main(int argc, char *argv[]) {
	int i,sonuc,sayac=0;
	for(i=2;i<=100000;i++){
		sonuc=bolen(i);
		if(sonuc==1){
			sayac++;
			printf("%d\n",sayac);
		}
	}
	return 0;
}

