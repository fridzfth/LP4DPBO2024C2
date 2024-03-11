class Vehicle:
    def __init__(self, namapemilik, platNomor, merk, tahunProduksi, warna, lebar, panjang):
        """
        Constructor method to initialize the Vehicle object.

        Parameters:
        - namapemilik (str): Owner's name
        - platNomor (str): License plate number
        - merk (str): Brand of the vehicle
        - tahunProduksi (int): Production year
        - warna (str): Color of the vehicle
        - lebar (float): Width of the vehicle
        - panjang (float): Length of the vehicle
        """
        self.namapemilik = namapemilik
        self.platNomor = platNomor
        self.merk = merk
        self.tahunProduksi = tahunProduksi
        self.warna = warna
        self.lebar = lebar
        self.panjang = panjang

    def getPlatNomor(self):
        """Get the license plate number."""
        return self.platNomor

    def getMerk(self):
        """Get the brand of the vehicle."""
        return self.merk

    def getPemilik(self):
        """Get the owner's name."""
        return self.namapemilik

    def getTahunProduksi(self):
        """Get the production year of the vehicle."""
        return self.tahunProduksi

    def getWarna(self):
        """Get the color of the vehicle."""
        return self.warna

    def getLebar(self):
        """Get the width of the vehicle."""
        return self.lebar

    def getPanjang(self):
        """Get the length of the vehicle."""
        return self.panjang

    def setPlatNomor(self, platNomor):
        """Set the license plate number."""
        self.platNomor = platNomor

    def setMerk(self, merk):
        """Set the brand of the vehicle."""
        self.merk = merk

    def setTahunProduksi(self, tahunProduksi):
        """Set the production year of the vehicle."""
        self.tahunProduksi = tahunProduksi

    def setWarna(self, warna):
        """Set the color of the vehicle."""
        self.warna = warna

    def setPemilik(self, pemilik):
        """Set the owner's name."""
        self.namapemilik = pemilik

    def setLebar(self, lbr):
        """Set the width of the vehicle."""
        self.lebar = lbr

    def setPanjang(self, pjg):
        """Set the length of the vehicle."""
        self.panjang = pjg

    # Destructor tidak diperlukan dalam Python
