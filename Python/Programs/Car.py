from Vehicle import Vehicle  # Importing the Vehicle class definition

# Declaration of the Car class, which is a subclass of the Vehicle class
class Car(Vehicle):
    def __init__(self, pemilik, platNomor, merk, tahunProduksi, warna, lebar, panjang, jumlahKursi, jumlahPintu):
        """
        Constructor method to initialize the Car object.

        Parameters:
        - pemilik (str): Owner's name
        - platNomor (str): License plate number
        - merk (str): Brand of the car
        - tahunProduksi (int): Production year
        - warna (str): Color of the car
        - lebar (float): Width of the car
        - panjang (float): Length of the car
        - jumlahKursi (int): Number of seats in the car
        - jumlahPintu (int): Number of doors in the car
        """
        super().__init__(pemilik, platNomor, merk, tahunProduksi, warna, lebar, panjang)
        self.jumlahKursi = jumlahKursi
        self.jumlahPintu = jumlahPintu

    # Getter functions to retrieve the values of Car-specific attributes
    def getJumlahKursi(self):
        """Get the number of seats in the car."""
        return self.jumlahKursi

    def getJumlahPintu(self):
        """Get the number of doors in the car."""
        return self.jumlahPintu

    # Setter functions to change the values of Car-specific attributes
    def setJumlahKursi(self, jumlahKursi):
        """Set the number of seats in the car."""
        self.jumlahKursi = jumlahKursi

    def setJumlahPintu(self, jumlahPintu):
        """Set the number of doors in the car."""
        self.jumlahPintu = jumlahPintu

    # Destructor is not required in Python
