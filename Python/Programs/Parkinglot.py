from typing import List

# Declaration of the ParkingLot class
class ParkingLot:
    def __init__(self, kapasitasMotor, kapasitasMobil):
        """
        Constructor method to initialize the ParkingLot object.

        Parameters:
        - kapasitasMotor (int): Capacity of motorcycle parking
        - kapasitasMobil (int): Capacity of car parking
        """
        self.kapasitasMotor = kapasitasMotor
        self.jumlahMotorSaatIni = 0
        self.kapasitasMobil = kapasitasMobil
        self.jumlahMobilSaatIni = 0
        self.daftarmotor = []  # List to store motorcycle objects in the parking lot
        self.daftarmobil = []  # List to store car objects in the parking lot

    # Setter methods to update the capacity of motorcycle and car parking
    def setKMo(self, kapasitas):
        """Set the capacity of motorcycle parking."""
        self.kapasitasMotor = kapasitas
    
    def setKCar(self, kapasitas):
        """Set the capacity of car parking."""
        self.kapasitasMobil = kapasitas

    # Getter methods to retrieve the current capacity and count of parked vehicles
    def getKapasitasMotor(self):
        """Get the capacity of motorcycle parking."""
        return self.kapasitasMotor

    def getJumlahMotorSaatIni(self):
        """Get the current count of parked motorcycles."""
        return self.jumlahMotorSaatIni

    def getKapasitasMobil(self):
        """Get the capacity of car parking."""
        return self.kapasitasMobil

    def getJumlahMobilSaatIni(self):
        """Get the current count of parked cars."""
        return self.jumlahMobilSaatIni

    # Method to add a motorcycle to the parking lot
    def tambahMotor(self, motor):
        """
        Add a motorcycle to the parking lot.

        Parameters:
        - motor (Motorcycle): Motorcycle object to be added
        """
        if self.kapasitasMotor > 0:
            self.daftarmotor.append(motor)
            self.jumlahMotorSaatIni += 1
            print("Motor berhasil ditambahkan ke dalam parking lot.")
        else:
            print("Mohon Maaf Parking lot untuk Motor penuh.")

    # Method to add a car to the parking lot
    def tambahMobil(self, mobil):
        """
        Add a car to the parking lot.

        Parameters:
        - mobil (Car): Car object to be added
        """
        if self.kapasitasMobil > 0:
            self.daftarmobil.append(mobil)
            self.jumlahMobilSaatIni += 1
            print("Mobil berhasil ditambahkan ke dalam parking lot.")
        else:
            print("Mohon Maaf Parking lot untuk Mobil penuh.")

    # Method to display information about the parking lot and parked vehicles
    def tampilkanInfo(self):
        print("Info Parkir Mall Puri Persada")
        print(f"Kapasitas Parkir Motor: {self.kapasitasMotor}\tKapasitas Parkir Mobil: {self.kapasitasMobil}")
        print(f"Sisa Slot Parkir Motor: {self.kapasitasMotor - self.jumlahMotorSaatIni}\tSisa Slot Parkir Mobil: {self.kapasitasMobil - self.jumlahMobilSaatIni}")
        print()

        if not self.daftarmobil:
            print("Parkiran Mobil Mall Puri Persada Kosong")
        else:
            print("Data Mobil di Parkiran Mall Puri Persada:")
            for i, vehicle in enumerate(self.daftarmobil, start=1):
                print(f"{i}. Nama Pemilik\t\t: {vehicle.getPemilik()}\n   Plat Nomor\t\t: {vehicle.getPlatNomor()}\n"
                      f"   Merk\t\t\t: {vehicle.getMerk()}\n   Warna\t\t: {vehicle.getWarna()}\n"
                      f"   Tahun Produksi\t: {vehicle.getTahunProduksi()}\n   Dimensi\t\t: {vehicle.getPanjang()}mm x {vehicle.getLebar()}mm \n"
                      f"   Jumlah Kursi\t\t: {vehicle.getJumlahKursi()}\n   Jumlah Pintu\t\t: {vehicle.getJumlahPintu()}\n")

        if not self.daftarmotor:
            print("Parkiran Motor Mall Puri Persada Kosong")
        else:
            print("Data Motor di Parkiran Mall Puri Persada:")
            for i, vehicle in enumerate(self.daftarmotor, start=1):
                print(f"{i}. Nama Pemilik\t\t: {vehicle.getPemilik()}\n   Plat Nomor\t\t: {vehicle.getPlatNomor()}\n"
                      f"   Merk\t\t\t: {vehicle.getMerk()}\n   Warna\t\t: {vehicle.getWarna()}\n"
                      f"   Tahun Produksi\t: {vehicle.getTahunProduksi()}\n   Dimensi\t\t: {vehicle.getPanjang()}mm x {vehicle.getLebar()}mm \n"
                      f"   Type\t\t\t: {vehicle.getJenisMotor()}\n   Kapasitas Tangki\t: {vehicle.getKapasitasTangki()}\n")
        print()

    # Destructor is not required in Python
