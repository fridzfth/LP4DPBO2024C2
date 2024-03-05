#pragma once
// Menggunakan pragma once agar header file hanya di-include satu kali

#include "Vehicle.cpp"  // Mengimpor definisi kelas Vehicle

// Deklarasi kelas Car yang merupakan turunan dari kelas Vehicle
class Car : public Vehicle {
private:
    int jumlahKursi;  // Jumlah kursi pada mobil
    int jumlahPintu;  // Jumlah pintu pada mobil

public:
    // Constructor untuk kelas Car, dengan memanggil constructor kelas Vehicle
    Car(string pemilik, string platNomor, string merk, int tahunProduksi, string warna, int lbr, int pjg, int jumlahKursi, int jumlahPintu)
        : Vehicle(pemilik, platNomor, merk, tahunProduksi, warna, lbr, pjg) {
        this->jumlahKursi = jumlahKursi;
        this->jumlahPintu = jumlahPintu;
    }

    // Getter functions untuk mendapatkan nilai atribut khusus Car
    int getJumlahKursi() const {
        return this->jumlahKursi;
    }

    int getJumlahPintu() const {
        return this->jumlahPintu;
    }

    // Setter functions untuk mengubah nilai atribut khusus Car
    void setJumlahKursi(int jumlahKursi) {
        this->jumlahKursi = jumlahKursi;
    }

    void setJumlahPintu(int jumlahPintu) {
        this->jumlahPintu = jumlahPintu;
    }

    // Destructor untuk kelas Car
    ~Car() {
    }
};
