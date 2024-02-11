<?php

// Kelas Dasar (Base Class)
class Kendaraan {
    private $merek;
    protected $tahunProduksi;

    public function __construct($merek, $tahunProduksi) {
        $this->merek = $merek;
        $this->tahunProduksi = $tahunProduksi;
    }

    public function getMerek() {
        return $this->merek;
    }

    public function getTahunProduksi() {
        return $this->tahunProduksi;
    }

    public function info() {
        echo "Merek: " . $this->merek . ", Tahun Produksi: " . $this->tahunProduksi . "<br>";
    }
}

// Kelas Turunan (Derived Class)
class Mobil extends Kendaraan {
    private $jumlahPintu;

    public function __construct($merek, $tahunProduksi, $jumlahPintu) {
        parent::__construct($merek, $tahunProduksi);
        $this->jumlahPintu = $jumlahPintu;
    }

    public function getJumlahPintu() {
        return $this->jumlahPintu;
    }

    public function info() {
        echo "Mobil - ";
        parent::info();
        echo "Jumlah Pintu: " . $this->jumlahPintu . "<br>";
    }
}

// Membuat objek mobil
$mobil = new Mobil("Toyota", 2020, 4);

// Mengakses method dari kelas dasar
echo "Merek mobil: " . $mobil->getMerek() . "<br>";
echo "Tahun produksi mobil: " . $mobil->getTahunProduksi() . "<br>";

// Mengakses method dari kelas turunan
echo "Jumlah pintu mobil: " . $mobil->getJumlahPintu() . "<br>";

// Memanggil method info() dari kelas turunan
$mobil->info();

?>
