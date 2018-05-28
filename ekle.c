#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "kutuphaneLibrary.h"



void ekle(){
	
	/*Ekran Temizleme Kodları*/
	system("CLS");//Windows için
	system("clear");//Linux için
	
	printf("*************************************\n");
	printf("***Ekleme Fonksiyonu\n");
	printf("*************************************\n");
    //Tanımlamalarımızı gerçekleştiriyoruz
    int sinir,i=1;
	ogr *ogrenciObj,*ogrenciObj1;

    //Hafızadan yer ayırıyoruz.
	ogrenciObj=(ogr*)calloc(1,sizeof(ogr));
    ogrenciObj1=(ogr*)calloc(1,sizeof(ogr));

    //Dosyamızı açıyoruz
	FILE *kutuphane;
	kutuphane=fopen("kutuphane.txt","a+");


    printf("Ogrencinin Adini giriniz: ");
    scanf("%s",(*ogrenciObj).ogrenciAdi);

    printf("Ogrencinin Numarasini giriniz: ");
    scanf("%s",(*ogrenciObj).ogrenciNo);

    //Dosya kac adet ogrenci oldugunu buluyoruz.
	fseek(kutuphane,0,SEEK_END);
    sinir=ftell(kutuphane)/sizeof(ogr);         
    rewind(kutuphane);

    //Döngü araciligiyla girilen kaydin dosyada olup olmadigini kontrol ediyoruz.
	while(i<=sinir){
		
		//Dosyadan veri okuyoruz
        fread(ogrenciObj1,sizeof(ogr),1,kutuphane);
        //"\n" hafizada 2 bayt yer kaplar. Bu yüzden 2 bayt kaydırıyoruz.
        fseek(kutuphane,3,SEEK_CUR);
            
        if(strcmp(ogrenciObj1->ogrenciNo,ogrenciObj->ogrenciNo)==0){
            printf("\n             !!! Hata !!!\nHer Ogrenci Yalnizca 1 kitap alabilir...\n");
            menu();
        }
        i++;
    }

    rewind(kutuphane);

	printf("Kitabin Adini giriniz :");
	scanf("%s",(*ogrenciObj).kitapAdi);

	printf("Kitabin Numarasini giriniz :");
	scanf("%s",(*ogrenciObj).kitapNo);

	printf("Alinan Tarihi giriniz :");
	scanf("%s",(*ogrenciObj).aldigiTarih);

	fwrite(ogrenciObj,sizeof(ogr),1,kutuphane);
	fprintf(kutuphane,"\n");

	printf("\n****Kayit basari ile eklendi...****\n");
	
	//Dosyayı kapatıp ayrılan alanlar iade ediyoruz
	fclose(kutuphane);
    free(ogrenciObj1);
	free(ogrenciObj);

	menu();
}
