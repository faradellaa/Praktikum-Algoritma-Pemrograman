//Nama File   : InsertionSORT.c
//Deskripsi   : Prosedur mengurutkan tabel integer dengan insertion sort
//Nama        : Fara Della Anindia
//NIM         : 24060121120002

#ifndef InsertionSORT_C
#define InsertionSORT_C
#include "InsertionSORT.h"
#include <stdio.h>

int InsertionSORT(int T[], int N)
{
    //Kamus Lokal
    int i,Pass,temp;
    //Algoritma
        for(i=1;i<N;i++)
        {
            temp=T[i];
            Pass=i-1;
            while((temp<T[Pass])&&(Pass>=0))
            {
                T[Pass+1]=T[Pass];
                Pass--;
            }
            T[Pass+1]=temp;
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
#endif
