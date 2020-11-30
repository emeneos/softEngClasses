#pragma once
class ZooAnimal
{
private:
    char* name;
    int cageNumber;
    int weightDate;
    int weight;
public:
    void Destroy(); // destroy function
    char* reptName();
    int daysSinceLastWeighed(int today);
    void create(char*, int, int, int); //1,1
};

