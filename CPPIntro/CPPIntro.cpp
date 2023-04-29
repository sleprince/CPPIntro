#include <iostream>

void BuildVariables()
{

    //standard namespace - standard classes and functions, console output
    std::cout << "Hello World!\n"; // << adds a break similar to +, /n is the less preffered end line method.

    int health = 100;

    std::cout << health << std::endl; //end line

    int level = 2;

    float enemyHealth = 30.3f;

    std::cout << enemyHealth << std::endl;

    float myHealth = 20;

    std::cout << myHealth << std::endl;

    double hugeHealth = 10;

    bool playing = false;

    std::string playerName = "Joe";

    std::cout << playerName << std::endl;

    char firstLetter = 'J';

    std::cout << firstLetter << std::endl;
}

void CalculateRemainingHealth()
{
    float playerHealth = 100.f;

    float damage = 10.f;

    float remainingHealth = playerHealth - damage;

    std::cout << "Remaining health: " << remainingHealth << std::endl;
}

int main() //main is the method that the .cpp file needs and runs by default
{
    BuildVariables(); //function has to be declared above where it is called, like in Python
    CalculateRemainingHealth();
}