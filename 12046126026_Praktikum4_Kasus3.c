/*
 * Program  : Game Tebak Angka
 * Nama     : Keyla Nurashieva
 * NIM      : 12046126026
 * Deskripsi: While loop untuk game tebak angka dengan pentunjuk
 */
 
#include <stdio.h>

int main () {
    const int secret_num = 21;
    int tebak = 0;
    int jmlh_coba = 0;
    
    printf ("========== GAME TEBAK ANGKA ==========\n\n");
    printf ("Saya punya angka rahasia antara 1-100.\n");
    printf ("Coba tebak!\n\n");
    
    while(tebak != secret_num) {
        printf ("Masukan tebakan anda: ");
        scanf ("%d", &tebak);
        jmlh_coba++;
        
        if (tebak < secret_num) {
            printf ("Tebakan terlalu KECIL! Coba lagi.\n\n");
        }
        else if (tebak > secret_num) {
            printf ("Tebakan terlalu BESAR! Coba lagi.\n\n");
        } 
        else {
            printf ("\n\n=======================================\n");
            printf ("\n    *** SELAMAT! Anda benar! ***\n");
            printf ("     Angka rahasianya adalah: %d\n", secret_num);  
            printf ("\n=======================================\n");
        }
    }       
    
    printf ("\nAnda menebak sebanyak %d kali.\n", jmlh_coba);
    printf ("Terima Kasih Sudah Bermain!\n");
    
    return 0;
    
}