#include "ZooAnimal.h"

// Defining the constructor #1 - exercise 1
void ZooAnimal::create(char const *name, int cageNumber, int weightDate, int weight)
{
    this->name = name;
    this->weight = weight;
    this->cageNumber = cageNumber;
    this->weightDate = weightDate;
}
//exercise 2.1

inline int ZooAnimal::reptWeightDate()
{
    return this->weightDate;
}
void ZooAnimal::Destroy()
{
    delete[] name;
}

// -------- member function to return the animal's name
//exc1.3
char const* ZooAnimal::reptName()
{
    return name;
}

// -------- member function to return the number of days
// -------- since the animal was last weighed

int ZooAnimal::daysSinceLastWeighed(int today) //exercise 1.2
{
    int startday, thisday;
    thisday = today / 100 * 30 + today - today / 100 * 100;
    startday = weightDate / 100 * 30 + weightDate - weightDate / 100 * 100;
    if (thisday < startday)
        thisday += 360;
    return (thisday - startday);
}

