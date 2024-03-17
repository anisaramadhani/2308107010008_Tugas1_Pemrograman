# 2308107010008_Tugas1_Pemrograman
PROGRAM 1: KONVERSI BILANGAN

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

PENJELASAN
    
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
4. Kemudian bilangan desimal dikonversi menjadi bilangan biner dengan mengambil sisa pembagian bilangan desimal dengan 2 pada setiap langkahnya, hasil biner kemudian dicetak.
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
3. Proses ini akan terus berlanjut sampai bilangan biner mencapai 0.

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
2. 'return 0' mengembalikan nilai 0, menunjukkan bahwa tidak ada kesalahan, dan akhirnya keluar dari fungsi main().

PROGRAM 2: TAHUN KABISAT

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

PENJELASAN

            #include <stdio.h>
            
            int main() {
                int tahun;
                
1. Dimulai dengan meng-include file header 'stdio.h' yang diperlukan untuk menggunakan fungsi input-output standar dalam bahasa C, kemudian fungsi 'main()' dimulai.
2. Variabel 'tahun' digunakan untuk menyimpan tahun yang akan dimasukkan oleh pengguna.

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
   
1. 'while (1)' adalah loop tak terbatas yang akan terus berjalan sampai ada perintah break yang menghentikannya.
2. Program mencetak pesan "Masukkan Tahun: " menggunakan printf() meminta pengguna untuk memasukkan tahun.
3. Jika input tidak berupa angka diperiksa dengan '(scanf("%d", &tahun) != 1)', program akan membersihkan buffer input menggunakan loop 'while (getchar() != '\n')' dan menampilkan pesan kesalahan "Input harus berupa angka."
4. Jika input adalah angka tetapi tidak terdiri dari 4 digit diperiksa dengan '(tahun < 1000 || tahun > 9999)', program akan menampilkan pesan kesalahan "Input harus terdiri dari 4 angka." Jika input valid, program keluar dari loop while.

           // Memeriksa apakah tahun kabisat atau bukan
            if ((tahun % 4 == 0 && tahun % 100 != 0) || tahun %400 == 0 ) {
               printf("Tahun ini adalah tahun kabisat");
            
            } else {
               printf("Tahun ini adalah bukan tahun kabisat");
            }
            return 0;
        }

1. Setelah mendapatkan input yang valid, program memeriksa apakah tahun yang diinput adalah tahun kabisat atau bukan.
2. Tahun yang habis dibagi 4 tetapi tidak habis dibagi 100 adalah tahun kabisat.
3. Tahun yang habis dibagi 400 adalah tahun kabisat.
4. Menggunakan operator modulo (%) untuk memeriksa kondisi-kondisi tersebut.
5. Jika tahun memenuhi salah satu dari kedua kondisi tersebut, program mencetak "Tahun ini adalah tahun kabisat". Jika tidak, program mencetak "Tahun ini adalah bukan tahun kabisat".
6. 'return 0' mengembalikan nilai 0, menunjukkan bahwa tidak ada kesalahan, dan akhirnya keluar dari fungsi main().

           
