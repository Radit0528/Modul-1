#include <stdio.h>
// Struct
struct Pegawai
{
    const char *nama_2311102013;
    int umur_2311102013;
    const char *jabatan_2311102013;
};
int main()
{
    struct Pegawai pgw1, pgw2;

    pgw1.nama_2311102013 = "Aji";
    pgw1.umur_2311102013 = 30;
    pgw1.jabatan_2311102013 = "Manager";
    pgw2.nama_2311102013 = "Fattah";
    pgw2.umur_2311102013 = 35;
    pgw2.jabatan_2311102013 = "Vice President";

    printf("====Pegawai 1====\n");
    printf("Nama: %s\n", pgw1.nama_2311102013);
    printf("Umur: %d\n", pgw1.umur_2311102013);
    printf("Jabatan: %s\n", pgw1.jabatan_2311102013);
    printf("====Pegawai 2====\n");
    printf("Nama: %s\n", pgw2.nama_2311102013);
    printf("Umur: %d\n", pgw2.umur_2311102013);
    printf("Jabatan: %s\n", pgw2.jabatan_2311102013);
    return 0;
}