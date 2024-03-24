#include <iostream>
#include <string>
using namespace std;

class Pegawai {
private:
    string nama_2311102013;
    int umur_2311102013;
    string jabatan_2311102013;
public:
    Pegawai(string x, int y, string z) {
        nama_2311102013 = x;
        umur_2311102013 = y;
        jabatan_2311102013 = z;
    }
    void tampilkanPegawai() {
        cout << "Nama: " << nama_2311102013 << endl;
        cout << "Umur: " << umur_2311102013 << " tahun" << endl;
        cout << "Jabatan: " << jabatan_2311102013 << endl;
    }
};

int main() {
    Pegawai pgw1("Fattah", 29, "Manager");
    Pegawai pgw2("Aji", 40, "CEO");
    cout << "===Pegawai 1===" << endl;
    pgw1.tampilkanPegawai();
    cout << "====Pegawai 2====" << endl;
    pgw2.tampilkanPegawai();
    return 0;
}
