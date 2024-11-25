#include "engine.h"

Engine::Engine()
{
    cout << "Luokan Engine konstruktori" <<endl;

}
Engine::Engine(int newHorsePower, double newDisplacement)
{
    horsePower = newHorsePower;
    displacement = newDisplacement;
}

int Engine::getHorsePower()
{
    return horsePower;

}

void Engine::setHorsePower(int newHorsePower)
{
    horsePower = newHorsePower;

}

double Engine::getDisplacement()
{
    return displacement;

}

void Engine::setDisplacement(double newDisplacement)
{
    displacement = newDisplacement;

}
