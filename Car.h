#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"

class Car : public Vehicle
{
    private:
        int doors;
    public:
        Car()
        {
            // Door count will display 0 if it fails.
            doors = 0;
        }
        
        void displayInfo()
        {
            Vehicle::displayInfo();
            cout << "\tDoors: " << getDoors() << endl;
        }

        void setDoors(int);

        int getDoors()
        { return doors;}
};

#endif