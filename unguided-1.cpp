#include <iostream>
using namespace std;

float hitungHarga(int jumlah_2311102013, float harga_2311102013) {
    return jumlah_2311102013 * harga_2311102013;
}

void tampilkanHarga(int jumlah_2311102013, float harga_2311102013) {
    cout << "jumlah Indomie yang dibeli: " << jumlah_2311102013 << endl;
    cout << "harga Indomie: Rp" << harga_2311102013 << endl;
    cout << "Total harga: Rp" << hitungHarga(jumlah_2311102013, harga_2311102013) << endl;
}

int main() {
    int jumlah_2311102013 = 10;
    float harga_2311102013 = 3500;

    tampilkanHarga(jumlah_2311102013, harga_2311102013);

    return 0;
}