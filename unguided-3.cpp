#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, int> umur_2311102013;

    umur_2311102013["Olan"] = 18;
    umur_2311102013["Rakha"] = 21;
    umur_2311102013["Rasyid"] = 17;
    umur_2311102013["Gery"] = 20;

    cout << "Umur Olan: " << umur_2311102013["Olan"] << " tahun" << endl;
    cout << "Umur Rakha: " << umur_2311102013["Rakha"] << " tahun" << endl;
    cout << "Umur Rasyid: " << umur_2311102013["Rasyid"] << " tahun" << endl;
    cout << "Umur Geri: " << umur_2311102013["Gery"] << " tahun" << endl;

    return 0;
}