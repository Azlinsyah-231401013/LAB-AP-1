#include <stdio.h>  // Library standar input dan output
#include <conio.h>  // Library untuk fungsi getch()

int main() {
    char nama[50];  // Deklarasi variabel untuk menyimpan nama
    int nim;        // Deklarasi variabel untuk menyimpan NIM
    char kom;       // Deklarasi variabel untuk menyimpan KOM
    float ip;       // Deklarasi variabel untuk menyimpan IP

    printf("Hello World\n");  // Mencetak "Hello World" ke layar

    printf("Masukkan nama : ");
    // scanf("%s", &nama);  // Komentar: scanf tidak digunakan untuk string karena tidak membaca spasi
    gets(nama);     // Menggunakan gets untuk membaca string (tidak disarankan karena tidak aman)

    printf("Masukkan NIM : ");
    scanf("%d", &nim);  // Membaca input integer untuk NIM

    printf("Masukkan KOM : ");
    scanf(" %c", &kom);  // Membaca input karakter untuk KOM (spasi sebelum %c untuk mengabaikan whitespace)

    printf("Masukkan IP : ");
    scanf("%f", &ip);  // Membaca input float untuk IP

    // printf("Nama : %s\n", nama);  // Komentar: menggunakan puts untuk mencetak string
    printf("Nama : ");
    puts(nama);     // Menggunakan puts untuk mencetak string

    printf("NIM : %d\n", nim);  // Mencetak NIM
    printf("KOM : %c\n", kom);  // Mencetak KOM
    printf("IP : %.3f\n", ip);  // Mencetak IP dengan 3 angka desimal

    printf("Press any button to continue...");
    getch();  // Menunggu user menekan tombol apapun sebelum program berakhir
}
