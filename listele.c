#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "kutuphaneLibrary.h"



void listele(){
	
	/*Ekran Temizleme Kodları*/
	system("CLS");//Windows için
	system("clear");//Linux için
	
	printf("*************************************\n");
	printf("***Listeleme Fonksiyonu\n");
	printf("*************************************\n");
	
	//Tanımlamalar gerçekleştiriliyor
    ogr *ogrenciObj;
	
	//Dosya açılıyor
    FILE *kutuphane;
    kutuphane=fopen("kutuphane.txt","r+");

	//Dosyayı Kontrol Ediyoruz
    if(kutuphane==NULL){
        printf("dosya acilamadi.\n");
        exit(0);
    }
	
	//Bellekten alan alıyoruz
    ogrenciObj=calloc(1,sizeof(ogr));
    
    //Dosyada kac adet kayıt oldugunu buluyoruz.
    int i=0,sinir,j=1;
    fseek(kutuphane,0,SEEK_END);
    sinir=ftell(kutuphane)/sizeof(ogr); 
    rewind(kutuphane);
    
    printf("  No |     Kitap No  |                   Kitap Adi  |            Ogrenci Adi  |   Ogrenci No  |  Aldigi Tarih ");
    printf("\n**************************************************************************************************************\n");

    //Dosyada bulunan kayıtları yazdırıyoruz. 
    while((i/sizeof(ogr))<sinir){
          fseek(kutuphane,i,SEEK_SET);
          fread(ogrenciObj,sizeof(ogr),1,kutuphane);
          printf("%3d- |%13s  |%28s  |%23s  |%13s  |%14s",j,(*ogrenciObj).kitapNo,(*ogrenciObj).kitapAdi,(*ogrenciObj).ogrenciAdi,(*ogrenciObj).ogrenciNo,(*ogrenciObj).aldigiTarih);
          printf("\n--------------------------------------------------------------------------------------------------------------\n");
          i+=sizeof(ogr)+2;
          j++;
       }


    if(sinir==0)
        printf("Listelenecek kayıt bulunmamaktadir...\n");
        free(ogrenciObj);
        fclose(kutuphane);
        menu();
}
