//Nama File   : TunjAnak.c
//Deskripsi   : Menghitung besarnya tunjangan anak berdasarkan jumlah anak dan gaji pokok
//Nama        : Fara Della Anindia
//NIM         : 24060121120002

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int jml_anak;
    int gaji;

    //Algoritma
    printf("Jumlah anak: ");
    scanf("%d", &jml_anak);
    printf("Gaji pokok: ");
    scanf("%d", &gaji);
    if(jml_anak>=0&&gaji>0){
        switch(jml_anak){
                case 0:
                    printf("Besarnya tunjangan anak= %d", (0*(10*gaji/100)));
                    break;
                case 1:
                    printf("Besarnya tunjangan anak= %d", (1*(10*gaji/100)));
                    break;
                case 2:
                    printf("Besarnya tunjangan anak= %d", (2*(10*gaji/100)));
                    break;
                default:
                    printf("Besarnya tunjangan anak= %d", (3*(10*gaji/100)));
        }
    }
    else{
        printf("Input tidak sesuai");
    }
    return 0;
}

