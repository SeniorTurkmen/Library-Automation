#ifndef kutuphaneLibrary
#define kutuphaneLibrary


typedef struct ogrenci{
    char ogrenciNo[11];
    char ogrenciAdi[50];
    char kitapAdi[50];
    char kitapNo[11];
    char aldigiTarih[10];
}ogr;

void ekle();

void ara();

void listele();

void sil();

void menu();


#endif