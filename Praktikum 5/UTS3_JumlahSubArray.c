//Nama file  : UTS3_JumlahSubArray.c
//Deskripsi  : Menghitung besarnya penjumlahan sub array/tabel T
//Nama       : Fara Della Anindia
//NIM        : 24060121120002

#include <stdio.h>
#include <math.h>

int main()
{

    //Kamus
    int N, i, j, jumlah;

    //Algoritma
    printf("=========Menjumlahkan Sub Array/Tabel T=========\n");
    printf("\nBanyaknya data pada array/tabel T : ");
    scanf("%d", &N);
    if (N<=0){
        printf("Banyaknya data pada array/tabel T harus bernilai integer positif\n");
    }
    else{
        int T[N];
            for(i=0;i<N;i++)
            {
                printf("Nilai data pada indeks ke-%d : ", i);
                scanf("%d", &T[i]);
            }

            jumlah=0;
            for(i=0;i<N;i++)
            {
                jumlah+=T[i];
                for(j=i+1;j<N;j++)
                {
                    jumlah+=T[j];
                }
            }
            printf("\nJumlah Sub Array/Tabel T : %d\n", jumlah);
        }
    return 0;
}
