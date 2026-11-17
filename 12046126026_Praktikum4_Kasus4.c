/*
 * Program  : Menu Aplikasi Kasir Minimarket
 * Nama     : Keyla Nurashieva
 * NIM      : 12046126026
 * Deskripsi: Nested loop untuk pola segitiga bintang 
 */
 
#include <stdio.h>

int main () {
    int pilihan;
    float harga, jumlah, subtotal;
    float total_belanja = 0;
    
    printf ("=== APLIKASI KASIR MINIMARKET SI ===\n\n");
    
    do {
        printf ("===== MENU UTAMA =====\n");
        printf ("1. Tambah Belanja\n");
        printf ("2. Lihat Total Belanja\n");
        printf ("3. Bayar & Keluar\n");
        printf ("======================\n");
        printf ("Pilih menu: ");
        scanf ("%d", &pilihan);
        
        switch (pilihan) {
            case 1:
                printf ("\n--- Tambah Belanja ---\n");
                printf ("Harga barang: Rp. ");
                scanf ("%f", &harga);
                printf ("Jumlah beli: ");
                scanf ("%f", &jumlah);
                subtotal  = harga * jumlah;
                total_belanja += subtotal;
                printf ("Subtotal: Rp. %.2f\n", subtotal);
                printf ("Total Belanja sementara: Rp. %.2f\n", total_belanja);
                printf ("\n");
                break;
                
            case 2:
                printf ("\nTotal Belanja sementara: Rp. %.2f\n", total_belanja);
                printf ("\n");
                break;
                
            case 3:
                printf ("\n=== PEMBAYARAN ===\n");
                printf ("Total yang harus dibayar: Rp. %.2f\n", total_belanja);
                printf ("Terima Kasih Telah Berbelanja!\n");
                printf ("\n");
                break;
                
            default:
                printf ("\nERROR: Menu tidak tersedia. Pilih 1-3 saja.\n");
        }
    } 
    
    while (pilihan!= 3);
    
    return 0;
}