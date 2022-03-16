//Nama File   : UpahKerja.c
//Deskripsi   : Menghitung upah kerja berdasarkan lamanya jam kerja
//Nama        : Fara Della Anindia
//NIM         : 24060121120002

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int golongan;
    int jam_kerja;

    //Algoritma
    printf("Golongan: ");
    scanf("%d", &golongan);
    printf("Lamanya jam kerja: ");
    scanf("%d", &jam_kerja);
    if(jam_kerja>0){
        if(jam_kerja<40){
            switch(golongan){
                case 1:
                    printf("Jumlah upah yang didapat= %d", jam_kerja*1000);
                    break;
                case 2:
                    printf("Jumlah upah yang didapat= %d", jam_kerja*1500);
                    break;
                case 3:
                    printf("Jumlah upah yang didapat= %d", jam_kerja*2000);
                    break;
                case 4:
                    printf("Jumlah upah yang didapat= %d", jam_kerja*2500);
                    break;
                default:
                    printf("Input golongan salah");
            }
        }
        else{
            switch(golongan){
                case 1:
                    printf("Jumlah upah yang didapat= %d", (40*1000+((jam_kerja-40)*1500)));
                    break;
                case 2:
                    printf("Jumlah upah yang didapat= %d", (40*1500+((jam_kerja-40)*2250)));
                    break;
                case 3:
                    printf("Jumlah upah yang didapat= %d", (40*2000+((jam_kerja-40)*3000)));
                    break;
                case 4:
                    printf("Jumlah upah yang didapat= %d", (40*2500+((jam_kerja-40)*3750)));
                    break;
                default:
                    printf("Input golongan salah");}
            }
    }
    return 0;
}
