#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Her rakami farkli ve bu rakamlarin yarisi cift diger yarisi tek ise bu sayilara DENGELI SAYI denir.
//Örnek: 10, 32, 4671...
//4 basamakli kac tane dengeli sayi vardir?

bool tekCiftSayisi(int eleman){
	int tek=0, cift=0;
	while(eleman>0){
		if((eleman%10)%2==0)cift=cift+1;
		else tek=tek+1;
		eleman=eleman/10;
	}
	if(tek==cift) return true;
	else return false;
}
bool elemanFarkliMi(int eleman){
	int dizi[4];
	int i,j;
	for(i=0;i<4;i++){
		dizi[i]=eleman%10;
		eleman=eleman/10;
	}
	for(i=0;i<4;i++){
		for(j=i+1;j<i+5;j++){
			if(dizi[i]==dizi[j]) return false;
		}
	}		
	return true;
}
int main(int argc, char *argv[]) {
	int i,sayac=0;
	for(i=1000;i<=9999;i++){
		if(elemanFarkliMi(i)){
			if(tekCiftSayisi(i)){
				printf("%d\n", i);
				sayac=sayac+1;	
			}
		}
	}
	printf("4 basamakli toplam dengeli sayi sayisi: %d", sayac);
	return 0;
}
