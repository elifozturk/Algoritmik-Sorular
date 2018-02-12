#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//1den buyuk asal olmayan bir tamsayinin rakamlarinin toplami, sayi asal carpanlarina  ayrilarak yazildiginda 
//bu yazilista bulunan tum asal carpanlarin rakamlarinin toplamina esit oluyorsa bu tur sayilara SMITH Sayisi denir.
// Ornek: 121 sayisi 11*11=121 1+2+1+=1+1+1+1 olur
//Buna gore 1000den kücük smith sayilarini bulma


int asalMi(int eleman){
	int i,k=1;
	for(i=2;i<eleman;i++){
		if(eleman%i==0){
			return 0;
		}
	}
	return 1;
}

int rakamToplaHesapla(int eleman){
	int toplam=0,i;
	while(eleman>0){
		toplam=toplam+(eleman%10);
		eleman=eleman/10;
	}
	return toplam;
}

/*
void asalCarpanTopla(int eleman){
	int i=2, toplam=0,yeleman;
	while(eleman!=1){
		if(eleman%i==0){
			eleman=eleman/i;
			toplam=toplam+i;
			
		}else{
			i++;
		}
	}
	printf("%d",toplam);	
}
*/
int asalCarpanTopla(int eleman){
	int i=2, toplam=0,yeleman;
	while(eleman!=1){
		if(eleman%i==0){
			eleman=eleman/i;
			toplam=toplam+rakamToplaHesapla(i);
		}else{
			i++;
		}
	}
	return toplam;
}

int main(int argc, char *argv[]) {
	int i,sayac=0;
	for(i=2;i<1000;i++){
		if(!asalMi(i)){
			if(asalCarpanTopla(i)==rakamToplaHesapla(i)){
				printf("%d\n",i);
			}
		}
	}
	return 0;
}


