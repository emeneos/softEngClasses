#pragma once
enum scale { ounces, kilograms };
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

//code from class#2
    void changeWeight(int pounds);
    void changeWeightDate(int today);
    int reptWeight();
    void reptWeight(scale which);
    inline int reptWeightDate();


};


