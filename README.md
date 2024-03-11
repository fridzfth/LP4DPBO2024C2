# LP4DPBO2024C2
## Author
Saya Mohammad Faridz Fathin mengerjakan LP4 dalam mata kuliah
DPBO untuk keberkahanNya maka saya tidak akan melakukan kecurangan seperti yang telah dispesifikasikan

## Vehicle Parking System

This Python program simulates a vehicle parking system with classes representing vehicles (Car and Motorcycle), a parking lot, and garages. The system allows users to park cars and motorcycles in designated parking spaces, and it provides information about the current state of the parking lots and garages.
### Class Design
![LP4 Class Design](https://drive.google.com/uc?id=1S16sR0FMerEgTfNoQwPK3pUbgsJilqYT)
### Classes

1. **Vehicle Class**

   - Represents a general vehicle with attributes such as owner's name, license plate number, brand, production year, color, width, and length.
   - Provides getter and setter methods for each attribute.

2. **Car Class (Inherits from Vehicle Class)**

   - Represents a car, extending the Vehicle class.
   - Includes additional attributes for the number of seats and doors.
   - Provides getter and setter methods for car-specific attributes.

3. **Motorcycle Class (Inherits from Vehicle Class)**

   - Represents a motorcycle, extending the Vehicle class.
   - Includes additional attributes for the type of motorcycle and fuel tank capacity.
   - Provides getter and setter methods for motorcycle-specific attributes.

4. **ParkingLot Class**

   - Represents a parking lot with specified capacities for motorcycles and cars.
   - Provides methods to add motorcycles and cars to the parking lot.
   - Displays information about the current state of the parking lot.

5. **Garage Class**

   - Represents a garage with a name, area, and lists to store parked cars and motorcycles.
   - Provides methods to park cars and motorcycles in the garage.
   - Displays information about the current state of the garage.

### How to Use

1. Import the necessary classes from the provided modules:

   ```python
   from Vehicle import Vehicle
   from Car import Car
   from Motorcycle import Motorcycle
   from Garage import Garage
   from ParkingLot import ParkingLot
   ```

2. Create instances of vehicles, garages, and parking lots.

3. Use the provided methods to park vehicles and display information about the parking system.

4. Example usage:

   ```python
   # Instantiate objects
   garasi1 = Garage("Garasi Depan", 25)
   garasi2 = Garage("Garasi Belakang", 5)
   park = ParkingLot(400, 200)

   # Instantiate vehicles
   car1 = Car("John Doe", "B 1234 CD", "Toyota", 2022, "Red", 1800, 4500, 5, 4)
   motorcycle1 = Motorcycle("Rudi Santoso", "M 1234 AB", "Honda", 2022, "Black", 800, 2000, "Sport", 150)

   # Park vehicles
   garasi1.CarParking(car1)
   garasi1.MotorParking(motorcycle1)

   # Display information
   garasi1.tampilkanInfoGarasi()
   park.tampilkanInfo()
   ```
