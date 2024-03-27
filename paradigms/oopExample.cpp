// Class example
#include <iostream>
#include <string>

class Fruit
{
private:
    // attributes
    std::string name;
    float weight;

public:
    // Constructor
    Fruit(std::string fruitName, float fruitWeight)
    {
        name = fruitName;
        weight = fruitWeight;
        }
    std::string getName();
    float getWeight();
};

// Methods
std::string Fruit::getName()
{
    return name;
}

float Fruit::getWeight()
{
    return weight;
}

int main()
{
    Fruit apple("apple", 0.2);

    std::cout << "Fruit Name: " << apple.getName() << std::endl;
    std::cout << "Fruit Weight: " << apple.getWeight() << std::endl;

    return 0;
}