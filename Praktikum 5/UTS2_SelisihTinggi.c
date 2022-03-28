//Nama file  : UTS2_SelisihTinggi.c
//Deskripsi  : Menghitung selisih ketinggian terbesar antara puncak bukit dengan lembah bukit atau sebaliknya menggunakan array
//Nama       : Fara Della Anindia
//NIM        : 24060121120002

#include <stdio.h>
#include <math.h>

int main()
{

    //Kamus
    int N, i, tertinggi, terendah, selisih;

    //Algoritma
    printf("=========Menghitung selisih tinggi puncak bukit dan lembah menggunakan array=========\n");
    printf("\nBanyaknya data ketinggian jalur lintasan : ");
    scanf("%d", &N);
    if (N<=0){
        printf("Banyaknya data ketinggian harus >0\n");
    }
    else{
    int T[N];
        for(i=0;i<N;i++)
        {
            printf("Tinggi jalur lintasan pada indeks ke-%d : ", i);
            scanf("%d", &T[i]);
        }

    terendah=tertinggi=T[0];
        for(i=0;i<N;i++)
        {
            if(tertinggi<T[i])
            {
                tertinggi=T[i];
            }
        }

        for(i=0;i<N;i++)
        {
            if(terendah>T[i])
            {
                terendah=T[i];
            }
        }
        printf("\nKetinggian tertinggi : %d", tertinggi);
        printf("\nKetinggian terendah : %d", terendah);
        selisih = tertinggi-terendah;
        printf("\nSelisih ketinggian : %d\n", selisih);
    }
    return 0;

}
