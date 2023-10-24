#include <iostream>
#include <cmath>
#include <iomanip>

struct Circle // Create struct
{
    double area;
    int radius;
    double pi = 3.14;
};

void AskInfo(Circle more) // Prototype asking information
{
    Circle obj;
    Circle *ptr = &obj;

    std::cout << "Enter radius here: ";
    std::cin >> ptr->radius;
}

void calculate(Circle more) // Calculation with given informations
{
    Circle obj;
    Circle *ptr = &obj;

    ptr->area = ptr->pi * pow(ptr->radius, 2.0);
    std::cout << "The area of circle is: " << ptr->area;
}

int main()
{
    std::cout << std::fixed << std::showpoint << std::setprecision(2);

    Circle test;
    AskInfo(test);
    calculate(test);

    return 0;
}