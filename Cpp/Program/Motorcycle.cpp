#pragma once
// Menggunakan pragma once agar header file hanya di-include satu kali

#include "Vehicle.cpp"  // Mengimpor definisi kelas Vehicle

// Deklarasi kelas Motorcycle yang merupakan turunan dari kelas Vehicle
class Motorcycle : public Vehicle {
private:
    string jenisMotor;        // Jenis motor
    int kapasitasTangki;      // Kapasitas tangki motor

public:
    // Constructor untuk kelas Motorcycle, dengan memanggil constructor kelas Vehicle
    Motorcycle(string pemilik, string platNomor, string merk, int tahunProduksi, string warna, int lbr, int pjg, string jenisMotor, int kapasitas)
        : Vehicle(pemilik, platNomor, merk, tahunProduksi, warna, lbr, pjg), jenisMotor(jenisMotor), kapasitasTangki(kapasitas) {
    }

    // Destructor untuk kelas Motorcycle
    ~Motorcycle() {
    }

    // Setter functions untuk mengubah nilai atribut khusus Motorcycle
    void setJenisMotor(string type) {
        this->jenisMotor = type;
    }

    void setKapasitasTangki(int cap) {
        this->kapasitasTangki = cap;
    }

    // Getter functions untuk mendapatkan nilai atribut khusus Motorcycle
    string getJenisMotor() {
        return this->jenisMotor;
    }

    int getKapasitasTangki() {
        return this->kapasitasTangki;
    }
};
