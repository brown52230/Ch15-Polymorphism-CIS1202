#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle
{
    private:
        int capacity;
    public:
        Truck()
        {
            // Capacity will display 0 if it fails.
            capacity = 0;
        }
        
        void displayInfo()
        {
            Vehicle::displayInfo();
            cout << "\tCapacity: " << getCapacity() << endl;
        }

        void setCapacity(int);

        int getCapacity()
        { return capacity;}
};

#endif