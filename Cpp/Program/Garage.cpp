#include "Motorcycle.cpp"  // Mengimpor definisi kelas Motorcycle
#include "Car.cpp"         // Mengimpor definisi kelas Car

// Deklarasi kelas Garage sebagai representasi garasi rumah untuk parkir mobil dan motor
class Garage {
    private:
        string namaGarasi;       // Nama garasi
        int luasGarasi;          // Luas garasi dalam meter persegi
        int luasSisa;            // Luas sisa garasi setelah kendaraan parkir
        list <Car> daftarMobil;  // List untuk menyimpan objek mobil
        list<Motorcycle> daftarMotor;  // List untuk menyimpan objek motor

    public:
        // Constructor default
        Garage(){
        }

        // Constructor dengan parameter nama garasi dan luas garasi
        Garage(string namaGarasi, int luasGarasi ) : namaGarasi(namaGarasi), luasGarasi(luasGarasi), luasSisa(luasGarasi) {
        }

        // Metode untuk menambahkan mobil ke dalam garasi
        void CarParking(Car cars) {
            if(luasSisa >= ((cars.getPanjang()+15)*(cars.getLebar()+15))/1000000) {  // Cek apakah masih ada cukup ruang untuk parkir mobil
                daftarMobil.push_back(cars);  // Tambahkan mobil ke dalam list
                luasSisa-=((cars.getPanjang()+15)*(cars.getLebar()+15))/1000000;  // Kurangi luas sisa untuk mobil yang baru diparkir
                cout << "Car added to garage " << namaGarasi << " with platNomor: " << cars.getPlatNomor() << endl;
            }else{
                cout << "Mohon maaf parkir penuh." << endl;
            }
        }

        // Metode untuk menambahkan motor ke dalam garasi
        void MotorParking(Motorcycle moto) {
            if(luasSisa >= ((moto.getPanjang()+15)*(moto.getLebar()+15)/1000000) ){  // Cek apakah masih ada cukup ruang untuk parkir motor
                daftarMotor.push_back(moto);  // Tambahkan motor ke dalam list
                luasSisa -=((moto.getPanjang()+15)*(moto.getLebar()+15))/1000000;  // Kurangi luas sisa untuk motor yang baru diparkir
                cout << "Motocycle added to garage " << namaGarasi << " with platNomor: " << moto.getPlatNomor() << endl;
            }else{
                cout << "Mohon maaf parkir penuh." << endl;
            }
        }

        // Metode untuk menampilkan informasi tentang kendaraan yang ada di garasi
        void tampilkanInfoGarasi(){
            cout << "Info Garasi Rumah ("<< this->get_nama()<<")" << endl;
            cout << "Luas Garasi\t: " << this->get_luas()<<"m^2" << endl;
            cout << "Status\t\t: " << ends;

            // Tampilkan status ketersediaan parkir berdasarkan luas sisa
            if(luasSisa <= 15 ) {
                if(luasSisa < 15){
                    cout << "Hanya tersedia parkir untuk motor" <<endl;
                }else{
                    cout << "Tersedia untuk 1 mobil atau beberapa motor" <<endl;
                }
            }else{
                cout << "Available for all vehicle"<<endl;
            }

            printf("\n");

            // Tampilkan informasi mobil yang ada di garasi
            if(this->daftarMobil.empty()){
                cout << "Tidak ada Mobil yang parkir." << endl;
            }else{
                printf("\n");
                cout << "Mobil di dalam Garage " << namaGarasi << ":" << endl;
                int  i=1;            
                for (auto vehicle : daftarMobil) {
                    // Tampilkan informasi mobil per item
                    cout << i<< ". Nama Pemilik\t\t: "<<vehicle.getPemilik()<<"\n   Plat Nomor\t\t: " << vehicle.getPlatNomor() << "\n   Merk\t\t\t: " << vehicle.getMerk()<<"\n   Warna\t\t: "<< vehicle.getWarna()<<"\n   Tahun Produksi\t: " << vehicle.getTahunProduksi() <<"\n   Dimensi\t\t: "<< vehicle.getPanjang()<<"mm x "<< vehicle.getLebar()<< "mm \n   Jumlah Kursi\t\t: "<<vehicle.getJumlahKursi()<< "\n   Jumlah Pintu\t\t: "<<vehicle.getJumlahPintu() <<endl;
                    i++;
                }
            }

            // Tampilkan informasi motor yang ada di garasi
            if(this->daftarMotor.empty()){
                cout << "Tidak ada Motor yang parkir." << endl;
                printf("\n");
            }else{
                int i =1;
                cout << "Motor di dalam Garage " << namaGarasi << ":" << endl;
                for (auto vehicle : daftarMotor) {
                    // Tampilkan informasi motor per item
                    cout << i<< ". Nama Pemilik\t\t: "<<vehicle.getPemilik()<<"\n   Plat Nomor\t\t: " << vehicle.getPlatNomor() << "\n   Merk\t\t\t: " << vehicle.getMerk()<<"\n   Warna\t\t: "<< vehicle.getWarna()<<"\n   Tahun Produksi\t: " << vehicle.getTahunProduksi() <<"\n   Dimensi\t\t: "<< vehicle.getPanjang()<<"mm x "<< vehicle.getLebar()<< "mm \n   Type\t\t\t: "<<vehicle.getJenisMotor()<< "\n   Kapasitas Tangki\t: "<<vehicle.getKapasitasTangki() <<endl;
                    i++;
                }
            }
        }

        // Setter untuk mengatur nama garasi
        void set_nama(string nama){
            this->namaGarasi = nama;
        }

        // Setter untuk mengatur luas garasi
        void set_luas(int luas){
            this->luasGarasi = luas;
        }

        // Getter untuk mendapatkan nama garasi
        string get_nama(){
            return this->namaGarasi;
        }

        // Getter untuk mendapatkan luas garasi
        int get_luas(){
            return this->luasGarasi;
        }

        // Getter untuk mendapatkan list mobil yang parkir di garasi
        list<Car> get_Mobil(){
            return daftarMobil;
        }

        // Getter untuk mendapatkan list motor yang parkir di garasi
        list<Motorcycle> get_Motor(){
            return daftarMotor;
        }

        // Destructor
        ~Garage() {
        }
    };
