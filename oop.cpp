#include <iostream>
#include <string>

class Animal
{
    std::string name;
    int age;

    Animal(std::string animalName, int ageInput)
    {
        name = animalName;
        age = ageInput;
    }
};

int main()
{
    Animal dog('spot', 3);
}