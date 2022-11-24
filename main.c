#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	system("COLOR 3"); //yazý rengi
	printf("EGEMEN SANAL\nOGRENCI NO:1220505051\n\nGirilen Sayiyi Yaziya Cevirme\n");
	
	int say; // girilecek sayi
	int kalan = 0,n = 0; //basamak sayýsý bulmak için
	int sayi[6]; //dizi
	
	while(1){
		printf("Bir Sayi Giriniz(Maksimum 4 Basamakli)\n"); //sayi girisi
		scanf("%d",&say);
		if(say >= -9999 && say<= 9999){ //girilen sayinin sýnýrlarý(aralýk arttýrýlarak ve aþaðýda gerekli kodlarý yazýlarak basamak sayýsý arttýrýlabilir)
			break;
		}
	}
	if(say < 0){
		printf("eksi ");   // girilen sayý negatifse 
		say = say* (-1);
	}
	while(1){  //basamak sayýsýný bulmak için
		kalan = say % 10;
		sayi[n] = kalan;
		say = say-kalan;
		say = say/10;
		n++;
		if(say <10){
			sayi[n] = say;   
			break;
		}
	}
	if(sayi[0] == 0){ //sayý 0 ise
		printf("sifir\n");
	}
	int n2 = n;
	while(n2 >= 0){  //0 dan büyükken
		if(n2 ==0){  //bir basamaklý ise
			switch(sayi[n2]){
				case 1:
					printf("bir");
					break;
				case 2:
					printf("iki");
					break;
				case 3:
					printf("uc");
					break;
				case 4:
					printf("dort");
					break;
				case 5:
					printf("bes");
					break;
				case 6:
					printf("alti");
					break;
				case 7:
					printf("yedi");
					break;
				case 8:
					printf("sekiz");
					break;
				case 9:
					printf("dokuz");
					break;
				
			}
		}
		if(n2 ==1){ //iki basamaklý ise
			switch(sayi[n2]){
				case 1:
					printf("on ");
					break;
				case 2:
					printf("yirmi ");
					break;
				case 3:
					printf("otuz ");
					break;
				case 4:
					printf("kirk ");
					break;
				case 5:
					printf("elli ");
					break;
				case 6:
					printf("altmis ");
					break;
				case 7:
					printf("yetmis ");
					break;
				case 8:
					printf("seksen ");
					break;
				case 9:
					printf("doksan ");
					break;
				
			}
		}
		if(n2 ==2){ //üç basamaklý ise
			switch(sayi[n2]){
				case 1:
					printf("yuz ");
					break;
				case 2:
					printf("ikiyuz ");
					break;
				case 3:
					printf("ucyuz ");
					break;
				case 4:
					printf("dortyuz ");
					break;
				case 5:
					printf("besyuz ");
					break;
				case 6:
					printf("altiyuz ");
					break;
				case 7:
					printf("yediyuz ");
					break;
				case 8:
					printf("sekizyuz ");
					break;
				case 9:
					printf("dokuzyuz ");
					break;
			}
		}
		if(n2 ==3){ //dört basamaklý ise
			switch(sayi[n2]){
				case 1:
					printf("bin ");
					break;
				case 2:
					printf("ikibin ");
					break;
				case 3:
					printf("ucbin ");
					break;
				case 4:
					printf("dortbin ");
					break;
				case 5:
					printf("besbin ");
					break;
				case 6:
					printf("altibin ");
					break;
				case 7:
					printf("yedibin ");
					break;
				case 8:
					printf("sekizbin ");
					break;
				case 9:
					printf("dokuzbin ");
					break;
			}
		}

		n2--;
	}
	
	
	

	return 0;
}
