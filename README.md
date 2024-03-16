# 2308107010008_Tugas1_Pemrograman
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

#Program 1
    
    #include <stdio.h>
    
    int main() {
        int pilihan;
        int bilangan;

1. Dimulai dengan meng-include library 'stdio.h', yang diperlukan untuk fungsi input-output standar seperti 'printf' dan 'scanf'.
2. Variabel 'Pilihan' digunakan untuk menyimpan pilihan operasi konversi yang dimasukkan oleh pengguna.
3. Variabel 'Bilangan' digunakan untuk menyimpan bilangan yang akan dikonversi.

       printf("Pilih Operasi Konversi:\n");
       printf("1. Bilangan Desimal ke Biner\n");
       printf("2. Bilangan Biner ke Desimal\n");
       printf("3. Bilangan Desimal ke Octal\n");
       printf("4. Bilangan Octal ke Desimal\n");

       printf("Masukkan Pilihan Konversi (1-4): ");
       scanf("%d", &pilihan); 

1. Pada menu pilihan konversi, program mencetak menggunakan fungsi 'printf'. Ada empat pilihan konversi yang tersedia yaitu desimal ke biner, biner ke desimal, desimal ke oktal, dan oktal ke desimal.
2. Program kemudian meminta pengguna untuk memasukkan pilihan mereka menggunakan fungsi 'scanf'.

       case 1:
            printf("Masukkan Bilangan Desimal: ");
            scanf("%d", &bilangan);
            printf("Hasil Konversi: ");
            while (bilangan > 0) {
                printf("%d", bilangan % 2);
                bilangan /= 2;
            }
            break;
   
1. Pilihan pengguna kemudian dianalisis menggunakan struktur pemilihan 'switch'. Akan diambil tindakan yang sesuai berdasarkan pilihan pengguna.
2. Program mencetak pesan "Masukkan Bilangan Desimal: " untuk meminta pengguna memasukkan bilangan desimal, ini dilakukan dengan menggunakan fungsi 'printf'.
3. Program membaca bilangan desimal yang dimasukkan oleh pengguna menggunakan fungsi 'scanf', kemudian bilangan disimpan dalam variabel 'bilangan'.
4. Bilangan desimal kemudian dikonversi menjadi bilangan biner dengan mengambil sisa pembagian bilangan desimal dengan 2 pada setiap langkahnya. Hasil biner kemudian dicetak.
5. Proses akan terus berlanjut sampai bilangan desimal mencapai 0.

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
   
1. Program meminta pengguna untuk memasukkan bilangan biner.
2. Bilangan biner tersebut dikonversi menjadi bilangan desimal dengan mengalikan setiap digit biner dengan 2 pangkat posisinya dan menambahkan ke total desimal.
3. Proses ini terus berlanjut sampai bilangan biner mencapai 0.

       case 3:
            printf("Masukkan Bilangan Desimal: ");
            scanf("%d", &bilangan);
            printf("Hasil konversi: %o", bilangan);
            break;
   
1. Program meminta pengguna untuk memasukkan bilangan desimal.
2. Bilangan desimal tersebut langsung dicetak dalam format oktal dengan menggunakan specifier '%o'.

       case 4:
            printf("Masukkan Bilangan Octal: ");
            scanf("%o", &bilangan);
            printf("Hasil konversi: %d", bilangan);
            break;
1. Program meminta pengguna untuk memasukkan bilangan oktal.
2. Bilangan oktal tersebut dibaca sebagai bilangan oktal dan langsung dicetak dalam format desimal.

          default:
              printf("Pilihan Tidak Valid\n");
              break;
        }

        return 0;
         
     }

1. Jika pilihan pengguna tidak sesuai dengan yang ada (tidak dalam rentang 1-4), program mencetak pesan "Pilihan Tidak Valid".
2. 'return 0': Program mengembalikan nilai 0, menunjukkan bahwa tidak ada kesalahan, dan akhirnya keluar dari fungsi main().

#Program 2


   
