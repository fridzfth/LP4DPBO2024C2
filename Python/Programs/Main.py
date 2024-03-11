from typing import List

# Definisi kelas Vehicle, Car, Motorcycle, Garage, dan ParkingLot seperti sebelumnya

from Vehicle import Vehicle
from Car import Car
from Motorcycle import Motorcycle
from Garage import Garage
from Parkinglot import ParkingLot

# Fungsi utama program
def main():
    # Instansiasi objek Garage dan ParkingLot
    garasi1 = Garage("Garasi Depan", 25)
    garasi2 = Garage("Garasi Belakang", 5)
    park = ParkingLot(400, 200)

   # Instansiasi 10 Mobil
    car1 = Car("John Doe", "B 1234 CD", "Toyota", 2022, "Merah", 1800, 4500, 5, 4)
    car2 = Car("Jane Smith", "D 5678 EF", "Honda", 2020, "Biru", 1700, 4200, 4, 4)
    car3 = Car("Ahmad Abdullah", "F 9012 GH", "Nissan", 2021, "Hitam", 1900, 4700, 7, 5)
    car4 = Car("Maria Rodriguez", "J 3456 KL", "Chevrolet", 2019, "Putih", 1800, 4600, 6, 4)
    car5 = Car("Siti Rahmah", "M 7890 NO", "Ford", 2023, "Hijau", 1800, 4800, 8, 5)
    car6 = Car("David Wilson", "P 1234 QR", "Mazda", 2022, "Abu-abu", 1700, 4300, 5, 4)
    car7 = Car("Aisha Patel", "R 5678 ST", "Hyundai", 2020, "Kuning", 1900, 4500, 6, 5)
    car8 = Car("Alexandre Dubois", "U 9012 VW", "Volkswagen", 2021, "Coklat", 1800, 4700, 5, 4)
    car9 = Car("Lina Chen", "X 3456 YZ", "Mercedes-Benz", 2019, "Silver", 1700, 4200, 4, 4)
    car10 = Car("Carlos Fernandez", "Z 7890 AB", "Kia", 2023, "Oranye", 1900, 4600, 7, 5)

    # Instansiasi 10 Motor
    motorcycle1 = Motorcycle("Rudi Santoso", "M 1234 AB", "Honda", 2022, "Hitam", 800, 2000, "Sport", 150)
    motorcycle2 = Motorcycle("Lina Chen", "N 5678 CD", "Yamaha", 2021, "Merah", 900, 2200, "Matic", 125)
    motorcycle3 = Motorcycle("Ahmad Abdullah", "P 9012 EF", "Suzuki", 2023, "Putih", 750, 1900, "Trail", 200)
    motorcycle4 = Motorcycle("Maria Rodriguez", "S 3456 GH", "Kawasaki", 2020, "Biru", 850, 2100, "Chopper", 180)
    motorcycle5 = Motorcycle("John Doe", "T 7890 IJ", "Harley-Davidson", 2019, "Hitam", 900, 2300, "Cruiser", 200)
    motorcycle6 = Motorcycle("Jane Smith", "V 1234 KL", "Ducati", 2022, "Silver", 800, 2000, "Sport", 150)
    motorcycle7 = Motorcycle("David Wilson", "X 5678 MN", "KTM", 2021, "Orange", 750, 1900, "Enduro", 250)
    motorcycle8 = Motorcycle("Siti Rahmah", "Z 9012 OP", "BMW", 2023, "Hijau", 850, 2100, "Touring", 180)
    motorcycle9 = Motorcycle("Alexandre Dubois", "A 3456 QR", "Triumph", 2020, "Abu-abu", 900, 2300, "Cruiser", 200)
    motorcycle10 = Motorcycle("Aisha Patel", "B 7890 ST", "Kymco", 2019, "Putih", 800, 2000, "Matic", 125)

    # Tampilkan info awal (masih kosong)
    park.tampilkanInfo()
    print()

    garasi1.tampilkanInfoGarasi()
    print()

    garasi2.tampilkanInfoGarasi()
    print()

    # Parkir ke Garasi depan
    garasi1.CarParking(car1)
    garasi1.MotorParking(motorcycle1)
    garasi1.MotorParking(motorcycle2)
    garasi1.CarParking(car2)
    garasi1.CarParking(car3)

    # ... (parkir kendaraan lainnya)
    print()

    garasi1.tampilkanInfoGarasi()
    print()

    # Parkir ke Garasi belakang
    garasi2.MotorParking(motorcycle4)
    garasi2.MotorParking(motorcycle5)
    garasi2.MotorParking(motorcycle7)
    garasi2.CarParking(car4)
    garasi2.CarParking(car5)
    garasi2.CarParking(car6)
    # ... (parkir kendaraan lainnya)
    print()

    garasi2.tampilkanInfoGarasi()
    print()

    # Parkir di Mall
    park.tambahMotor(motorcycle3)
    park.tambahMotor(motorcycle6)
    park.tambahMotor(motorcycle8)
    park.tambahMotor(motorcycle9)
    park.tambahMotor(motorcycle10)

    park.tambahMobil(car10)
    park.tambahMobil(car9)
    park.tambahMobil(car8)
    park.tambahMobil(car7)
    park.tambahMobil(car6)
    park.tambahMobil(car5)
    park.tambahMobil(car4)
    
    # Tampilkan info parkiran di Mall
    print()
    park.tampilkanInfo()

if __name__ == "__main__":
    main()
