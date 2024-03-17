#include <stdio.h>

int main() {
    int pilihan;
    int bilangan;

    printf("Pilih Operasi Konversi:\n");
    printf("1. Bilangan Desimal ke Biner\n");
    printf("2. Bilangan Biner ke Desimal\n");
    printf("3. Bilangan Desimal ke Octal\n");
    printf("4. Bilangan Octal ke Desimal\n");

    printf("Masukkan Pilihan Konversi (1-4): ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1:
            printf("Masukkan Bilangan Desimal: ");
            scanf("%d", &bilangan);
            printf("Hasil Konversi: ");
            while (bilangan > 0) {
                printf("%d", bilangan % 2);
                bilangan /= 2;
            }
            break;
            
        case 2:
            printf("Masukkan Bilangan Biner: ");
            scanf("%d", &bilangan);
            int desimal = 0, pangkat = 0;
            while (bilangan > 0) {
                desimal += (bilangan % 10) * (1 << pangkat);
                bilangan /= 10;
                pangkat++;
            }
            printf("Hasil Konversi: %d", desimal);
            break;

        case 3:
            printf("Masukkan Bilangan Desimal: ");
            scanf("%d", &bilangan);
            printf("Hasil konversi: %o", bilangan);
            break;

        case 4:
            printf("Masukkan Bilangan Octal: ");
            scanf("%o", &bilangan);
            printf("Hasil konversi: %d", bilangan);
            break;

        default:
            printf("Pilihan Tidak Valid\n");
            break;
    }

    return 0;
 
}