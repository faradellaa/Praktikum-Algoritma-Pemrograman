//Nama File   : main.c
//Deskripsi   : Program utama untuk mengurutkan tabel integer dengan selection sort
//Nama        : Fara Della Anindia
//NIM         : 24060121120002

#include "SelectionSORT.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int T[]= {6,0,3,2,1,9,22,-9,10,-4,7};
    int N;

    //Algoritma
    N=sizeof(T)/sizeof(T[0]);
    printf("===========================SelectionSORT========================\n");
    printf("\nTampilan tabel sebelum diurutkan :  ");
    PrintT(T,N);
    SelectionSORT(T,N);
    printf("\n\nTampilan tabel setelah diurutkan : ");
    PrintT(T,N);
    printf("\n\n=================================================================\n");
    return 0;
}
