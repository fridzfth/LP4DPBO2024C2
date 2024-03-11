from typing import List

class Garage:
    def __init__(self, namaGarasi="", luasGarasi=0):
        # Constructor to initialize the garage with a name and area
        self.namaGarasi = namaGarasi
        self.luasGarasi = luasGarasi
        self.luasSisa = luasGarasi
        self.daftarMobil = []  # List to store car objects
        self.daftarMotor = []  # List to store motorcycle objects

    def CarParking(self, cars):
        # Method to park a car in the garage
        if self.luasSisa >= ((cars.getPanjang() + 15) * (cars.getLebar() + 15)) / 1000000:
            self.daftarMobil.append(cars)
            self.luasSisa -= ((cars.getPanjang() + 15) * (cars.getLebar() + 15)) / 1000000
            print(f"Car added to garage {self.namaGarasi} with platNomor: {cars.getPlatNomor()}")
        else:
            print("Sorry, parking is full.")

    def MotorParking(self, moto):
        # Method to park a motorcycle in the garage
        if self.luasSisa >= ((moto.getPanjang() + 15) * (moto.getLebar() + 15) / 1000000):
            self.daftarMotor.append(moto)
            self.luasSisa -= ((moto.getPanjang() + 15) * (moto.getLebar() + 15)) / 1000000
            print(f"Motorcycle added to garage {self.namaGarasi} with platNomor: {moto.getPlatNomor()}")
        else:
            print("Sorry, parking is full.")

    def tampilkanInfoGarasi(self):
        # Method to display garage information
        print(f"Info Garage ({self.get_nama()})")
        print(f"Area of Garage\t: {self.get_luas()}m^2")
        print("Status\t\t:", end=" ")

        if self.luasSisa <= 15:
            if self.luasSisa < 15:
                print("Only space available for motorcycles")
            else:
                print("Available for 1 car or several motorcycles")
        else:
            print("Available for all vehicles")

        print()

        if not self.daftarMobil:
            print("No cars parked.")
        else:
            print("\nCars inside Garage", self.namaGarasi, ":")
            for i, vehicle in enumerate(self.daftarMobil, start=1):
                # Display car information
                print(f"{i}. Owner's Name\t\t: {vehicle.getPemilik()}\n   License Plate\t: {vehicle.getPlatNomor()}\n"
                      f"   Brand\t\t\t: {vehicle.getMerk()}\n   Color\t\t: {vehicle.getWarna()}\n"
                      f"   Production Year\t: {vehicle.getTahunProduksi()}\n   Dimensions\t\t: {vehicle.getPanjang()}mm x {vehicle.getLebar()}mm \n"
                      f"   Number of Seats\t: {vehicle.getJumlahKursi()}\n   Number of Doors\t: {vehicle.getJumlahPintu()}\n")

        if not self.daftarMotor:
            print("No motorcycles parked.")
        else:
            print(f"Motorcycles inside Garage {self.namaGarasi}:")
            for i, vehicle in enumerate(self.daftarMotor, start=1):
                # Display motorcycle information
                print(f"{i}. Owner's Name\t\t: {vehicle.getPemilik()}\n   License Plate\t: {vehicle.getPlatNomor()}\n"
                      f"   Brand\t\t\t: {vehicle.getMerk()}\n   Color\t\t: {vehicle.getWarna()}\n"
                      f"   Production Year\t: {vehicle.getTahunProduksi()}\n   Dimensions\t\t: {vehicle.getPanjang()}mm x {vehicle.getLebar()}mm \n"
                      f"   Type\t\t\t: {vehicle.getJenisMotor()}\n   Tank Capacity\t: {vehicle.getKapasitasTangki()}\n")
        print()

    def set_nama(self, nama):
        # Setter method for garage name
        self.namaGarasi = nama

    def set_luas(self, luas):
        # Setter method for garage area
        self.luasGarasi = luas

    def get_nama(self):
        # Getter method for garage name
        return self.namaGarasi

    def get_luas(self):
        # Getter method for garage area
        return self.luasGarasi

    def get_Mobil(self):
        # Getter method for the list of cars
        return self.daftarMobil

    def get_Motor(self):
        # Getter method for the list of motorcycles
        return self.daftarMotor

    # Destructor is not needed in Python