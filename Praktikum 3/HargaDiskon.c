//Nama File   : HargaDiskon.c
//Deskripsi   : Menghitung besarnya harga setelah diberikan diskon
//Nama        : Fara Della Anindia
//NIM         : 24060121120002

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    char jenis;
    int harga;

    //Algoritma
    printf("Masukkan jenis: ");
    scanf("%c", &jenis);
    printf("Masukkan harga: ");
    scanf("%d", &harga);
    if (harga>200 && harga<10000){
        switch(jenis){
            case 'A':
                printf("Jumlah yang harus dibayar: %d", (harga-(10*harga/100)));
                break;
            case 'B':
                printf("Jumlah yang harus dibayar: %d", (harga-(15*harga/100)));
                break;
            case 'C':
                printf("Jumlah yang harus dibayar: %d", (harga-(20*harga/100)));
                break;
            default:
                printf("Jenis barang tidak tersedia");
        }
    }
    else{
        switch(jenis){
            case 'A':
                printf("Barang dengan harga tersebut tidak mendapatkan diskon");
                break;
            case 'B':
                printf("Barang dengan harga tersebut tidak mendapatkan diskon");
                break;
            case 'C':
                printf("Barang dengan harga tersebut tidak mendapatkan diskon");
                break;
            default:
                printf("Jenis barang tidak tersedia");
        }
    }
    return 0;
}
