/*
 * Program  : Sistem Penilaian Mahasiswa
 * Nama     : Keyla Nurashieva
 * NIM      : 12046126026
 * Deskripsi: Deskripsi loop untuk hitung rata-rata, max, dan min
 */
 
#include <stdio.h>

int main () {
    int jmlh_mhs;
    float nilai, total = 0, rata;
    float max = 0, min = 100;
    
    printf ("=== SISTEM PENILAIAN MAHASISWA SI ===\n\n");
    printf ("Masukan jumlah mahasiswa: ");
    scanf ("%d", &jmlh_mhs);
    
    printf ("\n");
    
    for (int i = 1; i <= jmlh_mhs; i++) {
        printf ("Nilai mahasiswa ke-%d: ", i);
        scanf ("%f", &nilai);
        
        total += nilai;
        
        if (nilai > max) {
            max = nilai;
        }
        if (nilai < min) {
            min = nilai;
        }
    }
    
    rata = total / jmlh_mhs;
    
    printf ("\n=====================================\n");
    printf ("       LAPORAN NILAI KELAS SI      \n");
    printf ("=====================================\n");
    printf ("\n");
    printf ("Jumlah Mahasiswa    : %d\n", jmlh_mhs);
    printf ("Total Nilai         : %.2f\n", total);
    printf ("Rata-rata Kelas     : %.2f\n", rata);
    printf ("Nilai Tertinggi     : %.2f\n", max);
    printf ("Nilai Terendah      : %.2f\n", min);
    printf ("\n");
    printf ("=====================================\n");
    
    return 0;
    
}