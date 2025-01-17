#include "car.h"

Car::Car()
{
    cout << "Luokan Car konstruktori" <<endl;

}
Car::Car(string newBrand, string newModel)
{
    model = newModel;
    brand = newBrand;
}

void Car::setEngine()
{
    objEngine.setHorsePower(150);
    objEngine.setDisplacement(2.0);

}

void Car::setWheels()
{
    objWheel1.setSize(17);
    objWheel1.setType("kesarengas");
    objWheel2.setSize(17);
    objWheel2.setType("kesarengas");
    objWheel3.setSize(17);
    objWheel3.setType("kesarengas");
    objWheel4.setSize(17);
    objWheel4.setType("kesarengas");

}

string Car::getModel()
{
    return model;

}

void Car::setModel(string newModel)
{
    model = newModel;

}

string Car::getBrand()
{
    return brand;

}

void Car::setBrand(string newBrand)
{
    brand = newBrand;

}

void Car::printDetails()
{
    cout << "Moottori : " << objEngine.getHorsePower() << " hp, " << objEngine.getDisplacement() <<endl;
    cout << "Rengas 1: " << objWheel1.getSize() << " tuumaa, " << objWheel1.getType() <<endl;
    cout << "Rengas 2: " << objWheel2.getSize() << " tuumaa, " << objWheel2.getType() <<endl;
    cout << "Rengas 3: " << objWheel3.getSize() << " tuumaa, " << objWheel3.getType() <<endl;
    cout << "Rengas 4: " << objWheel4.getSize() << " tuumaa, " << objWheel4.getType() <<endl;

}
