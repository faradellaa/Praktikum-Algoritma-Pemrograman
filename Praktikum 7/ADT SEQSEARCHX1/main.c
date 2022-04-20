/*
Nama File : main.c
Deskripsi : program utama dari SEQSearchX1 (Mencari harga X dalam Tabel T [1..N] secara sekuensial mulai dari T1. Hasilnya adalah indeks IX dimana Tix = X(i terkecil),
            IX = 0 jika tidak ketemu)
Nama      : Fara Della Anindia
NIM       : 24060121120002
*/

#include "SEQSearchX1.h"
#include <stdio.h>
#include <stdlib.h>



int main(){
	//Kamus Lokal
    int X;
    int N = 14;
    int T[14]= {-3,-2,1,2,3,5,7,11,13,15,17,19,23,29};

    //Algoritma
    printf("===============SEQSearchX1=============");
    printf ("\nMasukkan nilai X yang ingin dicari : ");
    scanf("%d", &X);
    printf("IX: %d\n",SEQSearchX1(T,N,X));
return 0;
}
