//  Sam Brown
//  CIS 1202 101
//  April 20, 2022

#include "SamPersonalLibrary.h"

#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

void vehicleInput();
void carInput();
void truckInput();

int main(){
    Car baseCar;
    Truck baseTruck;

    cout << "Vehicle Program\n" << endl;
    
    vehicleInput();
    carInput();
    truckInput();

    endProgram();
}

void vehicleInput()
{
    Vehicle baseVehicle;
    
    string m;
    int y;

    cout << "Vehicle: " << endl;

    cout << "Enter the vehicle's manufacturer: ";
    getline(cin, m);

    cout << "Enter the vehicle's year: ";
    y = validateInteger(">> ");

    baseVehicle.setManufacturer(m);
    baseVehicle.setYear(y);

    cout << endl;
    baseVehicle.displayInfo();
    cout << endl;
}

void carInput()
{
    Car baseCar;
    
    string m;
    int y;
    int d;

    cout << "Car: " << endl;

    cout << "Enter the car's manufacturer: ";
    cin.get();
    getline(cin, m);

    cout << "Enter the car's year: ";
    y = validateInteger(">> ");

    cout << "Enter the car's number of doors: ";
    d = validateInteger(">> ");

    baseCar.setManufacturer(m);
    baseCar.setYear(y);
    baseCar.setDoors(d);

    cout << endl;
    baseCar.displayInfo();
    cout << endl;
}

void truckInput()
{
    Truck baseTruck;
    
    string m;
    int y;
    int c;

    cout << "Truck: " << endl;

    cout << "Enter the truck's manufacturer: ";
    cin.get();
    getline(cin, m);

    cout << "Enter the truck's year: ";
    y = validateInteger(">> ");

    cout << "Enter the truck's capacity: ";
    c = validateInteger(">> ");

    baseTruck.setManufacturer(m);
    baseTruck.setYear(y);
    baseTruck.setCapacity(c);

    cout << endl;
    baseTruck.displayInfo();
    cout << endl;
}