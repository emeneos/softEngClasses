#pragma once

class ZooAnimal
{
private:
    char const* name;
    int cageNumber;
    int weightDate;
    int weight;
public:
    void Destroy(); // destroy function
    char const* reptName();
    int daysSinceLastWeighed(int today);
    void create(char const*, int, int, int); //1,1
};


