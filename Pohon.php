<?php

// Kelas dasar
class Pohon {
    protected $tumbuh;
    protected $tinggi;
    protected $fotosintesis;
    protected $umur;

    // Constructor
    public function __construct($tumbuh, $tinggi, $fotosintesis, $umur) {
        $this->tumbuh = $tumbuh;
        $this->tinggi = $tinggi;
        $this->fotosintesis = $fotosintesis;
        $this->umur = $umur;
    }

    public function getTumbuh() {
        return $this->tumbuh;
    }

    public function getTinggi() {
        return $this->tinggi;
    }

    public function getFotosintesis() {
        return $this->fotosintesis;
    }

    public function getUmur() {
        return $this->umur;
    }

    public function cekUmur() {
        return 0.0;
    }

    // Destructor
    public function __destruct() {
        echo "Tampilkan objek Pohon<br>";
    }
}

// Kelas turunan
class PohonPisang extends Pohon {
    // Constructor
    public function __construct($tumbuh, $tinggi, $fotosintesis, $umur) {
        parent::__construct($tumbuh, $tinggi, $fotosintesis, $umur);
    }

    // Destructor
    public function __destruct() {
        echo "Tampilkan objek Pohon Pisang<br>";
    }
}

// Kelas turunan lainnya
class PohonMangga extends Pohon {
    // Constructor
    public function __construct($tumbuh, $tinggi, $fotosintesis, $umur) {
        parent::__construct($tumbuh, $tinggi, $fotosintesis, $umur);
    }

    // Destructor
    public function __destruct() {
        echo "Tampilkan objek Pohon Mangga<br>";
    }
}

// Contoh overloading
class ContohOverloading {
    public function cetak($num) {
        echo "Umur: $num<br>";
    }
}

// Contoh polimorfisme
function cetakUmur($pohon) {
    echo "Umur: " . $pohon->cekUmur() . "<br>";
}

$pohonPisang = new PohonPisang("Ke atas", 12000, "Siang hari", 1);
echo "Tumbuh: " . $pohonPisang->getTumbuh() . "<br>";
echo "Fotosintesis: " . $pohonPisang->getFotosintesis() . "<br>";
echo "Umur: " . $pohonPisang->getUmur() . "<br>";
echo "Tinggi: " . $pohonPisang->getTinggi() . "<br>";
cetakUmur($pohonPisang);

$pohonMangga = new PohonMangga("Kesamping", 20000, "Sore hari", 7);
echo "Tumbuh: " . $pohonMangga->getTumbuh() . "<br>";
echo "Fotosintesis: " . $pohonMangga->getFotosintesis() . "<br>";
echo "Umur: " . $pohonMangga->getUmur() . "<br>";
echo "Tinggi: " . $pohonMangga->getTinggi() . "<br>";
cetakUmur($pohonMangga);

$contoh = new ContohOverloading();
$contoh->cetak(1);
$contoh->cetak(2);

?>