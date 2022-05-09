//Nama File   : SelectionSORT.c
//Deskripsi   : Prosedur mengurutkan tabel integer dengan selection sort
//Nama        : Fara Della Anindia
//NIM         : 24060121120002

#ifndef SelectionSORT_C
#define SelectionSORT_C
#include "SelectionSORT.h"
#include <stdio.h>

int SelectionSORT(int T[], int N)
{
    //Kamus Lokal
    int i,j,min;
    //Algoritma
        for(i=0;i<N-1;i++)
        {
            for(j=i+1;j<N;j++)
            {
                min=i;
                if (T[j]<T[min])
                {
                    min=j;
                }
                swap(&T[i],&T[min]);
            }
        }
}
int PrintT(int T[], int N)
{
    //Kamus Lokal
    int i;
    //Algoritma
    for (i=0;i<N;i++)
    {
        printf("%d ", T[i]);
    }
}

int swap(int *a, int *b)
{
    //Kamus Lokal
    int temp;
    //Algoritma
    temp = *a;
    *a=*b;
    *b=temp;
}
#endif
