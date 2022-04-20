//Nama File : SEQSearchX1.c
/*Deskripsi : Mencari harga X dalam Tabel T [1..N] secara sekuensial mulai dari T1. Hasilnya adalah indeks IX dimana Tix = X(i terkecil),
              IX = 0 jika tidak ketemu*/
//Nama      : Fara Della Anindia
//NIM       : 24060121120002

#ifndef SEQSearchX1_C
#define SEQSearchX1_C
#include "SEQSearchX1.h"
#include <stdio.h>


int SEQSearchX1 (int T[], int N, int X){
    // Kamus Lokal
    int IX;
    int i;

    // Algoritma
    i = 1;
    while((i<N) && (T[i-1]!=X)){
        i++;
    }
    if(T[i-1]==X){
        IX = i;
        return IX;
    }
    else{
        IX = 0;
        return IX;
    }
}

#endif
