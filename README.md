# Ch15 - Inheritance and Polymorphism
## Sam Brown - 04.20.22 - 1202

### Inheritance
Develop a base and derived classes to represent different types of vehicles.  Then program a short driver to these classes.

Use a source code management tool as you develop this program.  Commit changes frequently using descriptive commit messages.  Push your changes to GitHub or other publicly accessible location for your instructor to clone.


#### Requirements
1. Define a base class called `Vehicle`.  Define the member variables and method prototypes in `Vehicle.h`, and the implementation of the methods in `Vehicle.cpp`.

    a. Define member variables for manufacturer and year built
    
    b. Define a constructor and appropriate getters and setters
    
    c. Define a `displayInfo` method to display the contents of the object
    
2. Define a `Car` class that inherits from `Vehicle`.  Define the member variables and method prototypes in `Car.h`, and the implementation of the methods in `Car.cpp`.

    a. Define a member variable for the number of doors

    b. Define a constructor and appropriate getters and setters

    c. Define a `displayInfo` method to display the contents of the object (call the base class method to display the Vehicle info, then display the Car info)

3. Define a `Truck` class that inherits from `Vehicle`.  Define the member variables and method prototypes in `Truck.h`, and the implementation of the methods in `Truck.cpp`.

    a. Define a member variable for the towing capacity
    
    b. Define a constructor and appropriate getters and setters
    
    c. Define a `displayInfo` method to display the contents of the object (call the base class method to display the Vehicle info, then display the Truck info)

4. Write a `main` function to test the classes and methods.
    
    a. Get input from the user for manufacturer and year built, then store this information in a `Vehicle` object.  Call the `displayInfo` method and display it on the output.
    
    b. Get input from the user for manufacturer, year built, and number of doors, then store this information in a `Car` object.  Call the `displayInfo` method and display it on the output.
    
    c. Get input from the user for manufacturer, year built, and towing capacity, then store this information in a `Truck` object.  Call the `displayInfo` method and display it on the output.

5. Use class methods to pass parameters and return values as needed, using only local variables.  Global variables are not allowed.

6. Use comments to document your program as you see fit.  Include comments at the beginning of your program with your name, the class (with section), and the date.

    ```
    // Josh Junior
    // CIS 1202 101
    // January 31, 2021
    ```
