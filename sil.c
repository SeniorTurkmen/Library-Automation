#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "kutuphaneLibrary.h"



void sil(){
	
	/*Ekran Temizleme Kodları*/
	system("CLS");//Windows için
	system("clear");//Linux için
	
	printf("*************************************\n");
	printf("***Silme Fonksiyonu\n");
	printf("*************************************\n");
	
	//Tanımlamaları yapıyoruz
    ogr *ogrenciObj;
	char num[11];
	int say=0;
	
	//Dosyalarımızı açıyoruz
	FILE  *kutuphane;
	FILE  *tempkutuphane;
	
	kutuphane=fopen("kutuphane.txt","r+");
	tempkutuphane=fopen("tempkutuphane.txt","w+");
	
	//Bellekten yer ayırıyoruz
	ogrenciObj=(ogr*)calloc(1,sizeof(ogr));
	
	//Dosyayı kontrol ediyoruz
	if(kutuphane==NULL)
    {
        printf("dosya acilamadi.\n");
        exit(0);
    }
	
	
    printf("Silinecek ogrencinin \"Ogrenci Numarasi\"ni giriniz : ");
    scanf("%s",num);

    //Dosya kac adet ogrenci oldugunu buluyoruz.
    int sinir,i=1;
    fseek(kutuphane,0,SEEK_END);
    sinir=ftell(kutuphane)/sizeof(ogr); 
    rewind(kutuphane);

    while(i<=sinir){
        fread(ogrenciObj,sizeof(ogr),1,kutuphane);
        fseek(kutuphane,2,SEEK_CUR);
        
		//Karşılaştırılma sonrası silinen kayıt hariç
		//diğer kayıtlar temp dosyasına yazıyoruz
        if(strcmp((*ogrenciObj).ogrenciNo,num)){
            fwrite(ogrenciObj,sizeof(ogr),1,tempkutuphane);
            fprintf(tempkutuphane,"\n");
        }
        
        //Kaydin dosyada bulunup bulunmadigini kontrol ediyoruz.
        if(strcmp((*ogrenciObj).ogrenciNo,num)==0){
            say++;                        
        }
            i++;
    }


    if(say==0){
        fclose(kutuphane);
        fclose(tempkutuphane);
        remove("tempkutuphane.txt");
        printf("kayit bulunamadi...\n");
        free(ogrenciObj);
        menu();
    }

    //kayit dosyada bulunduysa asil dosyayi silip olusturdugumuz 
	//ikinci dosyanin asil dosya olarak degistirip silme islemini tamamliyoruz.
    else if(say!=0){
    
        fclose(kutuphane);
        fclose(tempkutuphane);
        remove("kutuphane.txt");
        rename("tempkutuphane.txt","kutuphane.txt");
        printf("kayit bulundu...\n");
        printf("kayit basari ile silindi...\n");
        free(ogrenciObj);
        menu();

    }
}
