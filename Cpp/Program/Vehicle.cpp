#pragma once
// Menggunakan pragma once agar header file hanya di-include satu kali

#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

// Deklarasi kelas Vehicle untuk merepresentasikan kendaraan
class Vehicle {
private:
    string namapemilik;      // Nama pemilik kendaraan
    string platNomor;        // Nomor plat kendaraan
    string merk;             // Merk kendaraan
    int tahunProduksi;       // Tahun produksi kendaraan
    string warna;            // Warna kendaraan
    int lebar;               // Lebar kendaraan dalam milimeter
    int panjang;             // Panjang kendaraan dalam milimeter

public:
    // Constructor dengan parameter untuk inisialisasi atribut kendaraan
    Vehicle(string namapemilik, string platNomor, string merk, int tahunProduksi, string warna, int lebar, int panjang) {
        this->namapemilik = namapemilik;
        this->platNomor = platNomor;
        this->merk = merk;
        this->tahunProduksi = tahunProduksi;
        this->warna = warna;
        this->panjang = panjang;
        this->lebar = lebar;
    }

    // Getter functions untuk mendapatkan nilai atribut kendaraan
    string getPlatNomor() {
        return this->platNomor;
    }

    string getMerk() {
        return this->merk;
    }

    string getPemilik() {
        return this->namapemilik;
    }

    int getTahunProduksi() {
        return this->tahunProduksi;
    }

    string getWarna() {
        return this->warna;
    }

    int getLebar() {
        return this->lebar;
    }

    int getPanjang() {
        return this->panjang;
    }

    // Setter functions untuk mengubah nilai atribut kendaraan
    void setPlatNomor(string platNomor) {
        this->platNomor = platNomor;
    }

    void setMerk(string merk) {
        this->merk = merk;
    }

    void setTahunProduksi(int tahunProduksi) {
        this->tahunProduksi = tahunProduksi;
    }

    void setWarna(string warna) {
        this->warna = warna;
    }

    void setPemilik(string pemilik) {
        this->namapemilik = pemilik;
    }

    void setLebar(int lbr) {
        this->lebar = lbr;
    }

    void setPanjang(int pjg) {
        this->panjang = pjg;
    }

    // Destructor
    ~Vehicle() {
    }
};
