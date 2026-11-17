/*
 * Program  : Mencetak Pola Segitiga Bintang
 * Nama     : Keyla Nurashieva
 * NIM      : 12046126026
 * Deskripsi: Nested loop untuk pola segitiga bintang 
 */
 
#include <stdio.h>

int main () {
    int n;
    
    printf ("=== CETAK POLA SEGITIGA BINTANG ===");
    printf ("\n\nMasukan jumlah baris: ");
    scanf ("%d", &n);
    
    printf ("\n==================================\n\n"); 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf ("* ");
        }
        printf ("\n");
    }
    printf ("\n==================================\n");
    
    return 0;
}