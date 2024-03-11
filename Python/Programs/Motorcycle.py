from Vehicle import Vehicle  # Importing the Vehicle class definition

# Declaration of the Motorcycle class, which is a subclass of the Vehicle class
class Motorcycle(Vehicle):
    def __init__(self, pemilik, platNomor, merk, tahunProduksi, warna, lebar, panjang, jenisMotor, kapasitasTangki):
        """
        Constructor method to initialize the Motorcycle object.

        Parameters:
        - pemilik (str): Owner's name
        - platNomor (str): License plate number
        - merk (str): Brand of the motorcycle
        - tahunProduksi (int): Production year
        - warna (str): Color of the motorcycle
        - lebar (float): Width of the motorcycle
        - panjang (float): Length of the motorcycle
        - jenisMotor (str): Type of the motorcycle
        - kapasitasTangki (float): Fuel tank capacity of the motorcycle
        """
        super().__init__(pemilik, platNomor, merk, tahunProduksi, warna, lebar, panjang)
        self.jenisMotor = jenisMotor
        self.kapasitasTangki = kapasitasTangki

    # Destructor is not required in Python

    # Setter functions to change the values of Motorcycle-specific attributes
    def setJenisMotor(self, jenisMotor):
        """Set the type of the motorcycle."""
        self.jenisMotor = jenisMotor

    def setKapasitasTangki(self, kapasitasTangki):
        """Set the fuel tank capacity of the motorcycle."""
        self.kapasitasTangki = kapasitasTangki

    # Getter functions to retrieve the values of Motorcycle-specific attributes
    def getJenisMotor(self):
        """Get the type of the motorcycle."""
        return self.jenisMotor

    def getKapasitasTangki(self):
        """Get the fuel tank capacity of the motorcycle."""
        return self.kapasitasTangki
