#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
    private:
        string manufacturer;
        int year;
    public:
        Vehicle()
        {
            // Manufacturer will display NaN if it fails.
            manufacturer = "NaN";
            // Year will display 0 if it fails.
            year = 0;
        }

        void displayInfo()
        {
            cout << "Vehicle Information:" << endl
                 << "\tManufacturer: " << getManufacturer() << endl
                 << "\tYear Built: " << getYear() << endl;
        }

        void setManufacturer(string);
        void setYear(int);

        string getManufacturer()
        { return manufacturer; }
        int getYear()
        { return year; }
};

#endif