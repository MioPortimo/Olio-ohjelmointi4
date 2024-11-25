#include "car.h"
#include <iostream>

using namespace std;

int main()
{
    Car objCar1("Toyota", "Corolla");
    objCar1.setEngine();
    objCar1.setWheels();
    cout << "Auto : " << objCar1.getBrand() << " " << objCar1.getModel() <<endl;
    objCar1.printDetails();

    return 0;
}
