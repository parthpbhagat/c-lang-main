

//                 PR. 3 Vehicle Registry System

#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle
{
protected:
    int vehicle_ID;
    string manufacture;
    int year;

public:
    // Static member
    static int totalvehicle;

    // Constructor
    Vehicle(int vID, string mfg, int yr)
    {
        vehicle_ID = vID;
        manufacture = mfg;
        year = yr;
        totalvehicle++; // Increment vehicle count on creation of each vehicle
    }

    // Destructor
    ~Vehicle()
    {
        totalvehicle--; // Decrease count on destruction
    }

    // Getter methods
    int getVehicleID()
    {
        return vehicle_ID;
    }

    string getManufacture()
    {
        return manufacture;
    }

    int getYear()
    {
        return year;
    }

    // Setter methods
    void setVehicleID(int vID)
    {
        vehicle_ID = vID;
    }

    void setManufacture(string mfg)
    {
        manufacture = mfg;
    }

    void setYear(int yr)
    {
        year = yr;
    }

    // Static function to get the vehicle count
    static int getTotalVehicle()
    {
        return totalvehicle;
    }

    // Virtual function to display vehicle details (Polymorphism)
    virtual void displayDetails()
    {
        cout << "Vehicle ID: " << vehicle_ID << endl;
        cout << "Manufacturer: " << manufacture << endl;
        cout << "Year: " << year << endl;
    }
};

// Initialize static member
int Vehicle::totalvehicle = 0;

//  Derived class Car
class Car : public Vehicle
{
private:
    string fueltype;

public:
    Car(int vid, string mfg, int yr, string fuel)
        : Vehicle(vid, mfg, yr)
    {
        fueltype = fuel;
    }

    void setFuelType(string fuel)
    {
        fueltype = fuel;
    }

    string getFuelType()
    {
        return fueltype;
    }

    // Overriding base class method
    void displayDetails() override
    {
        Vehicle::displayDetails();
        cout << "Fuel Type: " << fueltype << endl;
    }
};

// Derived class ElectricCar
class ElectricCar : public Car
{
private:
    string battery_capacity;

public:
    ElectricCar(int vid, string mfg, int yr, string fuel, string battery)
        : Car(vid, mfg, yr, fuel)
    {
        battery_capacity = battery;
    }

    void setBatteryCapacity(string battery)
    {
        battery_capacity = battery;
    }

    string getBatteryCapacity()
    {
        return battery_capacity;
    }

    // Overriding base class method
    void displayDetails() override
    {
        Car::displayDetails();
        cout << "Battery Capacity: " << battery_capacity << endl;
    }
};

// Derived class Aircraft
class Aircraft : public Vehicle
{
private:
    string flight_range;

public:
    Aircraft(int vid, string mfg, int yr, string range)
        : Vehicle(vid, mfg, yr)
    {
        flight_range = range;
    }

    void setFlightRange(string range)
    {
        flight_range = range;
    }

    string getFlightRange()
    {
        return flight_range;
    }

    // Overriding base class method
    void displayDetails() override
    {
        Vehicle::displayDetails();
        cout << "Flight Range: " << flight_range << endl;
    }
};

// Derived class FlyingCar (New class added)
class FlyingCar : public Car
{
public:
    FlyingCar(int vid, string mfg, int yr, string fuel)
        : Car(vid, mfg, yr, fuel) {}

    // Overriding base class method
    void displayDetails() override
    {
        Car::displayDetails();
        cout << "This is a flying car!" << endl;
    }
};

// Derived class SportCar (New class added)
class SportCar : public Car
{
public:
    SportCar(int vid, string mfg, int yr, string fuel)
        : Car(vid, mfg, yr, fuel) {}

    // Overriding base class method
    void displayDetails() override
    {
        Car::displayDetails();
        cout << "This is a sport car!" << endl;
    }
};

// Derived class Sedan (New class added)
class Sedan : public Car
{
public:
    Sedan(int vid, string mfg, int yr, string fuel)
        : Car(vid, mfg, yr, fuel) {}

    // Overriding base class method
    void displayDetails() override
    {
        Car::displayDetails();
        cout << "This is a sedan car!" << endl;
    }
};

// Derived class SUV (New class added)
class SUV : public Car
{
public:
    SUV(int vid, string mfg, int yr, string fuel)
        : Car(vid, mfg, yr, fuel) {}

    // Overriding base class method
    void displayDetails() override
    {
        Car::displayDetails();
        cout << "This is an SUV!" << endl;
    }
};

// Main function
int main()
{
    // Create an array of vehicle objects (increased array size)
    Vehicle *vehicles[7]; // Array of 7 Vehicle pointers

    // Initialize vehicles
    vehicles[0] = new Car(101, "Honda Civic", 2022, "Petrol");
    vehicles[1] = new ElectricCar(102, "Tesla", 2023, "Electric", "75kWh");
    vehicles[2] = new Aircraft(103, "Boeing 747", 2019, "15,000 km");
    vehicles[3] = new FlyingCar(104, "BMW", 2021, "Diesel");
    vehicles[4] = new SportCar(105, "Nissan Leaf", 2022, "Electric");
    vehicles[5] = new Sedan(106, "Toyota Camry", 2020, "Hybrid");
    vehicles[6] = new SUV(107, "Ford Explorer", 2021, "Gasoline");

    // Display details of each vehicle
    for (int i = 0; i < 7; i++)
    {
        vehicles[i]->displayDetails();
        cout << endl;
    }

    // Display total vehicles registered
    cout << "Total vehicles registered: " << Vehicle::getTotalVehicle() << endl;

    // Delete vehicles to call destructors and reduce vehicle count
    for (int i = 0; i < 7; i++)
    {
        delete vehicles[i];
    }

    return 0;
}