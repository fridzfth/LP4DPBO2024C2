// Saya Mohammad Faridz Fathin mengerjakan LP4 dalam mata kuliah
// DPBO untuk keberkahanNya maka saya tidak akan melakukan kecurangan seperti yang telah dispesifikasikan
#include "Motorcycle.cpp"  // Mengimpor definisi kelas Motorcycle
#include "Car.cpp"         // Mengimpor definisi kelas Car
#include "Garage.cpp"      // Mengimpor definisi kelas Garage
#include "Parkinglot.cpp"  // Mengimpor definisi kelas ParkingLot

// Fungsi utama program
int main() {
    // Instansiasi objek Garage dan ParkingLot
    Garage garasi1("Garasi Depan", 25);
    Garage garasi2("Garasi Belakang", 5);
    ParkingLot park(400, 200);

    // Instansiasi 10 Mobil
    Car car1("John Doe", "B 1234 CD", "Toyota", 2022, "Merah", 1800, 4500, 5, 4);
    Car car2("Jane Smith", "D 5678 EF", "Honda", 2020, "Biru", 1700, 4200, 4, 4);
    Car car3("Ahmad Abdullah", "F 9012 GH", "Nissan", 2021, "Hitam", 1900, 4700, 7, 5);
    Car car4("Maria Rodriguez", "J 3456 KL", "Chevrolet", 2019, "Putih", 1800, 4600, 6, 4);
    Car car5("Siti Rahmah", "M 7890 NO", "Ford", 2023, "Hijau", 1800, 4800, 8, 5);
    Car car6("David Wilson", "P 1234 QR", "Mazda", 2022, "Abu-abu", 1700, 4300, 5, 4);
    Car car7("Aisha Patel", "R 5678 ST", "Hyundai", 2020, "Kuning", 1900, 4500, 6, 5);
    Car car8("Alexandre Dubois", "U 9012 VW", "Volkswagen", 2021, "Coklat", 1800, 4700, 5, 4);
    Car car9("Lina Chen", "X 3456 YZ", "Mercedes-Benz", 2019, "Silver", 1700, 4200, 4, 4);
    Car car10("Carlos Fernandez", "Z 7890 AB", "Kia", 2023, "Oranye", 1900, 4600, 7, 5);

    // intansiasi 1o motor
    Motorcycle motorcycle1("Rudi Santoso", "M 1234 AB", "Honda", 2022, "Hitam", 800, 2000, "Sport", 150);
    Motorcycle motorcycle2("Lina Chen", "N 5678 CD", "Yamaha", 2021, "Merah", 900, 2200, "Matic", 125);
    Motorcycle motorcycle3("Ahmad Abdullah", "P 9012 EF", "Suzuki", 2023, "Putih", 750, 1900, "Trail", 200);
    Motorcycle motorcycle4("Maria Rodriguez", "S 3456 GH", "Kawasaki", 2020, "Biru", 850, 2100, "Chopper", 180);
    Motorcycle motorcycle5("John Doe", "T 7890 IJ", "Harley-Davidson", 2019, "Hitam", 900, 2300, "Cruiser", 200);
    Motorcycle motorcycle6("Jane Smith", "V 1234 KL", "Ducati", 2022, "Silver", 800, 2000, "Sport", 150);
    Motorcycle motorcycle7("David Wilson", "X 5678 MN", "KTM", 2021, "Orange", 750, 1900, "Enduro", 250);
    Motorcycle motorcycle8("Siti Rahmah", "Z 9012 OP", "BMW", 2023, "Hijau", 850, 2100, "Touring", 180);
    Motorcycle motorcycle9("Alexandre Dubois", "A 3456 QR", "Triumph", 2020, "Abu-abu", 900, 2300, "Cruiser", 200);
    Motorcycle motorcycle10("Aisha Patel", "B 7890 ST", "Kymco", 2019, "Putih", 800, 2000, "Matic", 125);

    // tampilkan info awal (msh ksosng)
    park.tampilkanInfo();
    printf("\n");
    garasi1.tampilkanInfoGarasi();
    printf("\n");
    garasi2.tampilkanInfoGarasi();
    printf("\n");

    // Parkir ke Garasi depan
    garasi1.CarParking(car1);
    garasi1.MotorParking(motorcycle1);
    garasi1.MotorParking(motorcycle2);
    garasi1.CarParking(car2);
    garasi1.CarParking(car3);
    printf("\n");

    garasi1.tampilkanInfoGarasi();
    printf("\n");

    // Parkir ke Garasi belakang
    garasi2.MotorParking(motorcycle4);
    garasi2.MotorParking(motorcycle5);
    garasi2.MotorParking(motorcycle7);
    garasi2.CarParking(car4);
    garasi2.CarParking(car5);
    garasi2.CarParking(car6);
    printf("\n");


    garasi2.tampilkanInfoGarasi();
    printf("\n");

    // Parkir Mall
    park.tambahMotor(motorcycle3);
    park.tambahMotor(motorcycle6);
    park.tambahMotor(motorcycle8);
    park.tambahMotor(motorcycle9);
    park.tambahMotor(motorcycle10);

    park.tambahMobil(car10);
    park.tambahMobil(car9);
    park.tambahMobil(car8);
    park.tambahMobil(car7);
    park.tambahMobil(car6);
    park.tambahMobil(car5);
    park.tambahMobil(car4);
    
    // tampil info parkiran mall
    printf("\n");
    park.tampilkanInfo();


}
