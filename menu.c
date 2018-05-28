#include<stdio.h>
#include "kutuphaneLibrary.h"


void menu(){
    printf("*************************************\n");
    printf("***1. Ekle\n");
    printf("***2. Listele\n");
    printf("***3. Ara\n");
    printf("***4. Sil\n");
    printf("***5. Cikis\n");
	printf("*************************************\n");
    char secim;

    printf("Lutfen Seciminizi Giriniz:  ");
    scanf("%s",&secim);

    switch(secim){
        case '1':
            ekle();
            break;
        case '2':
			listele();
            break;
        case '3':
			ara();
            break;
        case '4':
			sil();
            break;
        case '5':
            exit(0);
            break;
        default :
            printf("Lutfen gecerli bir veri giriniz!!!\n");
			menu();
            break;
    }


}
