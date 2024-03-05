#include "Motorcycle.cpp"  // Mengimpor definisi kelas Motorcycle
#include "Car.cpp"         // Mengimpor definisi kelas Car

// Deklarasi kelas ParkingLot yang merepresentasikan parkiran mall untuk mobil dan motor
class ParkingLot {
private:
    int kapasitasMotor;         // Kapasitas parkir untuk motor
    int jumlahMotorSaatIni;     // Jumlah motor saat ini di parkiran
    int kapasitasMobil;         // Kapasitas parkir untuk mobil
    int jumlahMobilSaatIni;     // Jumlah mobil saat ini di parkiran
    list<Motorcycle> daftarmotor;  // List untuk menyimpan objek motor di parkiran
    list<Car> daftarmobil;         // List untuk menyimpan objek mobil di parkiran

public:
    // Constructor untuk inisialisasi kapasitas parkir motor dan mobil
    ParkingLot(int kapasitasMotor, int kapasitasMobil)
        : kapasitasMotor(kapasitasMotor), jumlahMotorSaatIni(0),
          kapasitasMobil(kapasitasMobil), jumlahMobilSaatIni(0) {
    }

    // Setter functions untuk mengubah kapasitas parkir motor dan mobil
    void setKMo(int kapasitas){
        this->kapasitasMotor = kapasitas;
    }
    
    void setKCar(int kapasitas){
        this->kapasitasMobil = kapasitas;
    }

    // Getter functions untuk mendapatkan informasi kapasitas dan jumlah kendaraan saat ini
    int getKapasitasMotor()  {
        return kapasitasMotor;
    }

    int getJumlahMotorSaatIni()  {
        return jumlahMotorSaatIni;
    }

    int getKapasitasMobil()  {
        return kapasitasMobil;
    }

    int getJumlahMobilSaatIni()  {
        return jumlahMobilSaatIni;
    }

    // Menambahkan motor ke dalam parking lot
    void tambahMotor(Motorcycle motor) {
        if (kapasitasMotor > 0) {
            daftarmotor.push_back(motor);
            jumlahMotorSaatIni++;
            cout << "Motor berhasil ditambahkan ke dalam parking lot." << endl;
        } else {
            cout << "Mohon Maaf Parking lot untuk Motor penuh." << endl;
        }
    } 

    // Menambahkan mobil ke dalam parking lot
    void tambahMobil(Car mobil) {
        if (kapasitasMobil > 0) {
            daftarmobil.push_back(mobil);
            jumlahMobilSaatIni++;
            cout << "Mobil berhasil ditambahkan ke dalam parking lot." << endl;
        } else {
            cout << "Mohon Maaf Parking lot untuk Mobil penuh." << endl;
        }
    }

    // Menampilkan informasi parking lot
    void tampilkanInfo() {
        cout << "Info Parkir Mall Puri Persada" << endl;
        cout << "Kapasitas Parkir Motor: " << kapasitasMotor << "\tKapasitas Parkir Mobil: " << kapasitasMobil << endl;
        cout << "Sisa Slot Parkir Motor: " << kapasitasMotor - jumlahMotorSaatIni << "\tSisa Slot Parkir Mobil: " << kapasitasMobil - jumlahMobilSaatIni  << endl;
        printf("\n");

        // Menampilkan informasi mobil di parkiran jika ada
        if (this->daftarmobil.empty()) {
            cout << "Parkiran Mobil Mall Puri Persada Kosong" << endl;
        } else {
            cout << "Data Mobil di Parkiran Mall Puri Persada:" << endl;
            int i = 1;
            for (auto vehicle : daftarmobil) {
                cout << i<< ". Nama Pemilik\t\t: "<<vehicle.getPemilik()<<"\n   Plat Nomor\t\t: " << vehicle.getPlatNomor() << "\n   Merk\t\t\t: " << vehicle.getMerk()<<"\n   Warna\t\t: "<< vehicle.getWarna()<<"\n   Tahun Produksi\t: " << vehicle.getTahunProduksi() <<"\n   Dimensi\t\t: "<< vehicle.getPanjang()<<"mm x "<< vehicle.getLebar()<< "mm \n   Jumlah Kursi\t\t: "<<vehicle.getJumlahKursi()<< "\n   Jumlah Pintu\t\t: "<<vehicle.getJumlahPintu() <<endl;
                i++;
            }
        }

        // Menampilkan informasi motor di parkiran jika ada
        if (this->daftarmobil.empty()) {
            cout << "Parkiran Motor Mall Puri Persada Kosong" << endl;
        } else {
            int i = 1;
            printf("\n");
            cout << "Data Motor di Parkiran Mall Puri Persada:" << endl;
            for (auto vehicle : daftarmotor) {
                cout << i<< ". Nama Pemilik\t\t: "<<vehicle.getPemilik()<<"\n   Plat Nomor\t\t: " << vehicle.getPlatNomor() << "\n   Merk\t\t\t: " << vehicle.getMerk()<<"\n   Warna\t\t: "<< vehicle.getWarna()<<"\n   Tahun Produksi\t: " << vehicle.getTahunProduksi() <<"\n   Dimensi\t\t: "<< vehicle.getPanjang()<<"mm x "<< vehicle.getLebar()<< "mm \n   Type\t\t\t: "<<vehicle.getJenisMotor()<< "\n   Kapasitas Tangki\t: "<<vehicle.getKapasitasTangki() <<endl;
                i++;
            }
        }
    }

    // Destructor untuk kelas ParkingLot
    ~ParkingLot(){
    }
};
