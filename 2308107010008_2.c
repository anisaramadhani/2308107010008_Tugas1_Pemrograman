#include <stdio.h>

int main() {
    int tahun;

    // Meminta input dari pengguna
    while (1) {
        printf("Masukkan Tahun: ");
        if (scanf("%d", &tahun) != 1) {
            while (getchar() != '\n');
            printf("Input harus berupa angka, silahkan coba lagi.\n");
        } else if (tahun < 1000 || tahun > 9999) {
            printf("Input harus terdiri dari 4 angka.\n");
        } else {
            break;
        }
    }

    // Memeriksa apakah tahun kabisat atau bukan
    if ((tahun % 4 == 0 && tahun % 100 != 0) || tahun %400 == 0 ) {
       printf("Tahun ini adalah tahun kabisat");
    
    } else {
       printf("Tahun ini adalah bukan tahun kabisat");
    }
    return 0;
}