#ifndef WHEEL_H
#define WHEEL_H
#include <iostream>

using namespace std;


class Wheel
{
public:
    Wheel();
    Wheel(int newSize, string newType);
    int getSize();
    void setSize(int newSize);
    string getType();
    void setType(string newType);

private:
    int size;
    string type;
};

#endif // WHEEL_H
