//Nama File   : TarifPLN.c
//Deskripsi   : Menghitung besarnya biaya listrik yang dikenakan berdasarkan pemakaian dayanya
//Nama        : Fara Della Anindia
//NIM         : 24060121120002

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int golongan;
    int daya;
    int tarif;

    //Algoritma
    printf("Masukkan golongan: ");
    scanf("%d", &golongan);
    printf("Masukkan daya: ");
    scanf("%d", &daya);
    if (daya<=100){
        switch(golongan){
            case 1:
                printf("Tarif listrik yang dikenakan: %d", tarif=100000);
                break;
            case 2:
                printf("Tarif listrik yang dikenakan: %d", tarif=200000);
                break;
            default:
                printf("Input golongan salah");}
    }
    else if (daya<1000){
        switch(golongan){
            case 1:
                printf("Tarif listrik yang dikenakan: %d", tarif=daya*1000);
                break;
            case 2:
                printf("Tarif listrik yang dikenakan: %d", tarif=daya*2000);
                break;
            default:
                printf("Input golongan salah");}
    }
    else{
        switch(golongan){
            case 1:
                printf("Tarif listrik yang dikenakan: %d", tarif=daya*1100);
                break;
            case 2:
                printf("Tarif listrik yang dikenakan: %d", tarif=daya*2200);
                break;
            default:
                printf("Input golongan salah");}
    }
    return 0;
}
