// classes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ZooAnimal.h"

int main()
{
    ZooAnimal bozo;
    bozo.create("Bozo", 408, 1027, 400);

    std::cout << "This animal's name is " << bozo.reptName() << std::endl;

    bozo.Destroy();
    return 0;
}
