#include <iostream>
using namespace std;

class Vehicle 
{
    public:
    string brand;
    int year;

    void Accept() 
    {
        cout << "Enter Vehicle Brand: ";
        cin>>brand;
        cout << "Enter Manufacturing Year: ";
        cin >> year;
    }

    void display() 
    {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }
};

class Car : public Vehicle
{
    public:
    int numDoors;
    void Accept1() 
    { 
        cout << "Enter Number of Doors: ";
        cin >> numDoors;
    }

    void display1() 
    {
        display();
        cout << "Number of Doors: " << numDoors << endl;
    }
};

class ElectricCar : public Car {
    public:
    int batteryCapacity; 

    void Accept2() 
    {
        cout << "Enter Battery Capacity (in kWh): ";
        cin >> batteryCapacity;
    }

    void display2() 
    {
        display();
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }
};

int main() 
{
    ElectricCar e;
    e.Accept();
    e.Accept1();
    e.Accept2();
    e.display2();
    return 0;
}
