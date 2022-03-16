//Nama File   : BiayaParkir.c
//Deskripsi   : Menghitung biaya parkir berdasarkan lamanya parkir
//Nama        : Fara Della Anindia
//NIM         : 24060121120002

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus
    int i;

    //Algoritma
    printf("Waktu lamanya parkir (i) : ");
    scanf("%d", &i);
    if (i>0)
    {
        if (i<=2)
        {
            i=2000;
        }
        else
        {
            i=2000+(i-2)*500;
        }
    }
    printf("Besarnya tarif parkir yang harus dibayar:  %d", i);
    return 0;
}
