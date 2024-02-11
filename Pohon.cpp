#include <iostream>
using namespace std;

// Kelas dasar
class Pohon {
protected:
    string tumbuh;
    int tinggi;
    string fotosintesis;
    int umur;

public:
    // Constructor
    Pohon(string tumbuh, int tinggi, string fotosintesis, int umur) : tumbuh(tumbuh), tinggi(tinggi), fotosintesis(fotosintesis), umur(umur) {}

    string gettumbuh() {
        return tumbuh;
    }

    int gettinggi() {
        return tinggi;
    }
    string getfotosintesis() {
        return fotosintesis;
    }
    int getumur() {
        return umur;
    }

    virtual double cekUmur() {
        return 0.0;
    }

    // Destructor
    virtual ~Pohon() {
        cout << "Tampilkan objek Pohon" << endl;
    }
};

// Kelas turunan
class Pohonpisang : public Pohon {
public:
    // Constructor
    Pohonpisang(string tumbuh, int tinggi, string fotosintesis, int umur) : Pohon(tumbuh, tinggi, fotosintesis, umur) {}

    string gettumbuh() {
        return tumbuh;
    }

    int gettinggi() {
        return tinggi;
    }
    string getfotosintesis() {
        return fotosintesis;
    }
    int getumur() {
        return umur;
    }

    // Destructor
    ~Pohonpisang() {
        cout << "Tampilkan objek Pohonpisang" << endl;
    }
};

// Kelas turunan lainnya
class Pohonmangga : public Pohon {
public:
    // Constructor
    Pohonmangga(string tumbuh, int tinggi, string fotosintesis, int umur) : Pohon(tumbuh, tinggi, fotosintesis, umur) {}

    string gettumbuh() {
        return tumbuh;
    }

    int gettinggi() {
        return tinggi;
    }
    string getfotosintesis() {
        return fotosintesis;
    }
    int getumur() {
        return umur;
    }

    // Destructor
    ~Pohonmangga() {
        cout << "Tampilkan objek Pohonmangga" << endl;
    }
};

// Contoh overloading
class ContohOverloading {
public:
    void cetak(int num) {
        cout << "Umur: " << num << endl;
    }

    void cetak(double num) {
        cout << "Umur: " << num << endl;
    }
};

// Contoh polimorfisme
void cetakUmur(Pohon* pohon) {
    cout << "Umur: " << pohon->cekUmur() << endl;
}

int main() {
    Pohonpisang pohonpisang("Ke atas", 12000, "Siang hari", 1);
    cout << "Tumbuh: " << pohonpisang.gettumbuh() << endl;
    cout << "Fotosintesis: " << pohonpisang.getfotosintesis() << endl;
    cout << "Umur: " << pohonpisang.getumur() << endl;
    cout << "Tinggi: " << pohonpisang.gettinggi() << endl;
    cetakUmur(&pohonpisang);

    Pohonmangga pohonmangga("Kesamping", 20000, "Sore hari", 7);
    cout << "Tumbuh: " << pohonmangga.gettumbuh() << endl;
    cout << "Fotosintesis: " << pohonmangga.getfotosintesis() << endl;
    cout << "Umur: " << pohonmangga.getumur() << endl;
    cout << "Tinggi: " << pohonmangga.gettinggi() << endl;
    cetakUmur(&pohonmangga);

    ContohOverloading contoh;
    contoh.cetak(1);
    contoh.cetak(2);

    return 0;
}