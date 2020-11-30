#include "ZooAnimal.h"

// Defining the constructor #1 - exercise 1
void ZooAnimal::create(char* name, int cageNumber, int weightDate, int weight)
{
    this->name = name;
    this->weight = weight;
    this->cageNumber = cageNumber;
    this->weightDate = weightDate;
}