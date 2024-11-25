#ifndef ENGINE_H
#define ENGINE_H
#include <iostream>
using namespace std;


class Engine
{
public:
    Engine();
    Engine(int newHorsePower,double newDisplacement);
    int getHorsePower();
    void setHorsePower(int newHorsePower);
    double getDisplacement();
    void setDisplacement(double newDisplacement);

private:
    int horsePower;
    double displacement;
};

#endif // ENGINE_H
