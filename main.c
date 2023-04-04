#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main() {

    int Ar[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // untuk process ascending
    int i, tar, awal = 0, akhir = 10, tengah;

    system("cls");
    for (i = 0; i < 10; i++) {
        printf("index ke-%d = ",Ar[i]);
        scanf("%d",&Ar[i]);
    }

    printf("\nMasukan data yang akan dicari : ");
    scanf("%d", &tar);

    while (awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if (tar > Ar[tengah]) {
            awal = tengah + 1;
        } else if (tar < Ar[tengah]) {
            akhir = tengah + 1;
        } else {
            awal = akhir + 1;
        }
    }

    if(tar == Ar[tengah]){
        tengah = tengah + 1;
        printf("Data ditemukan pada index ke-%d",tengah);
    }else{
        printf("Data tidak ditemukan..!");
    }
    getch();

}