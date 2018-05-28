#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "kutuphaneLibrary.h"


void ara(){
	
	/*Ekran Temizleme Kodları*/
	system("CLS");//Windows için
	system("clear");//Linux için
	
	printf("*************************************\n");
	printf("***Arama Fonksiyonu\n");
	printf("*************************************\n");
	
    int j,sinir,i=1,kitapKira=0;
    FILE *kutuphane;
	
	//struct tanımlamalarını yapıyoruz
    ogr *ogrenciObj, *ogrenciObj1;
	
	//Calloc ile bellekten yer ayırıyoruz.
    ogrenciObj=(ogr*)calloc(1,sizeof(ogr));
	ogrenciObj1=(ogr*)calloc(1,sizeof(ogr));
	
	//Dosyamızı açıyoruz
    kutuphane=fopen("kutuphane.txt","r+");
    
	//Dosyamızın kontrollerini sağlıyoruz
    if(kutuphane==NULL){
        printf("dosya acilamadi.\n");
        exit(0);
    }
	
	//Kullanıcıdan veri alıyoruz
    printf("Lutfen aramak isteginiz ogrencinin numarasını giriniz:");
    scanf("%s",(*ogrenciObj1).ogrenciNo);
    
	//Dosyada kac adet ogrenci oldugunu buluyoruz.
    fseek(kutuphane,0,SEEK_END);
    sinir = ftell(kutuphane)/sizeof(ogr);
    fseek(kutuphane,0,SEEK_SET);
    

	while(i<=sinir){
            fread(ogrenciObj,sizeof(ogr),1,kutuphane);
			//"\n" hafizada 2 bayt yer kaplar. Bu yüzden 2 bayt kaydrıyoruz.
			fseek(kutuphane,2,SEEK_CUR);
			
			//Kullanıcının girimiş olduğu değer karşılaşırılıyor
            if(strcmp(ogrenciObj->ogrenciNo,ogrenciObj1->ogrenciNo)==0){
                
				//İmleci öğrencinin bulunduğu satıra getiriyoruz. 
                fseek(kutuphane,j,SEEK_SET);
                fread(ogrenciObj,sizeof(ogr),1,kutuphane);
				
				//Bulunan değer ekrana yazdırılıyor

                printf("Ogrencinin Numarasi: %s\n", (*ogrenciObj).ogrenciNo);
                printf("     Ogrencinin Adi: %s\n", (*ogrenciObj).ogrenciAdi);
                printf("   Kitabın Numarasi: %s\n", (*ogrenciObj).kitapNo);
                printf("        Kitabın Adı: %s\n", (*ogrenciObj).kitapAdi);
                printf("       Aldigi Tarih: %s\n", (*ogrenciObj).aldigiTarih);

                kitapKira++;
            }

            j++;
            i++;
            
	}
	
    //Öğrenci bulunamamış ise kitapkira 0 olarak kalacaktır.
    if(kitapKira==0){
        printf("kayit bulunamadi...\n");

    }
    menu();
}
