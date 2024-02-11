#include <iostream>
#include <string>
using namespace std;

// Kelas Dasar (Base Class)
class Kendaraan {
private:
    string merek;

protected:
    int tahunProduksi;

public:
    Kendaraan(string _merek, int _tahunProduksi) : merek(_merek), tahunProduksi(_tahunProduksi) {}

    string getMerek() {
        return merek;
    }

    int getTahunProduksi() {
        return tahunProduksi;
    }

    void info() {
        cout << "Merek: " << merek << ", Tahun Produksi: " << tahunProduksi << endl;
    }
};

// Kelas Turunan (Derived Class)
class Mobil : public Kendaraan {
private:
    int jumlahPintu;

public:
    Mobil(string _merek, int _tahunProduksi, int _jumlahPintu) : Kendaraan(_merek, _tahunProduksi), jumlahPintu(_jumlahPintu) {}

    int getJumlahPintu() {
        return jumlahPintu;
    }

    void info() {
        cout << "Mobil - ";
        Kendaraan::info();
        cout << "Jumlah Pintu: " << jumlahPintu << endl;
    }
};

int main() {
    // Membuat objek mobil
    Mobil mobil("Toyota", 2020, 4);

    // Mengakses method dari kelas dasar
    cout << "Merek mobil: " << mobil.getMerek() << endl;
    cout << "Tahun produksi mobil: " << mobil.getTahunProduksi() << endl;

    // Mengakses method dari kelas turunan
    cout << "Jumlah pintu mobil: " << mobil.getJumlahPintu() << endl;

    // Memanggil method info() dari kelas turunan
    mobil.info();

    return 0;
}
