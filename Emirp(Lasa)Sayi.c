#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//Emrirp(LAsa) Sayi mi?
//emirp sayi eger sayinin tersten yazilmis hali de asal sayi ise

int asalMi(int eleman){
	int i,k=1;
	for(i=2;i<eleman;i++){
		if(eleman%i==0){
			return 0;
		}
	}
	return 1;
}
int tersCevir(int eleman,int sayac){
	int yEleman=0,sayi=0;
	while(eleman>0){
		yEleman=eleman%10;
		yEleman=yEleman*pow(10,sayac-1);
		sayi=sayi+yEleman;
		eleman=eleman/10;
		sayac=sayac-1;
	}
	return sayi;
}
int basamakSayisiBul(int eleman){
	int sayac=0;
	while(eleman>0){
		eleman=eleman/10;	
		sayac++;	
	}
	return sayac;
}
int main(int argc, char *argv[]) {
	int asilSayi,basamak,tersSayi;
	printf("Sayiyi girin\n");
	scanf("%d",&asilSayi);
	
	if(asalMi(asilSayi)==1){
		basamak=basamakSayisiBul(asilSayi);
		tersSayi=tersCevir(asilSayi,basamak);
		if(asalMi(tersSayi)==1) printf("girilen sayi emirp sayidir.");
		else printf("Girilen sayi emirp degildir.");
	}else{
		printf("Girilen sayi asal degil.");
	}
	return 0;
}
