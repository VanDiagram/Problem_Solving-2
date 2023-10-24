#include <iostream>
#include <cmath>
#include <iomanip>

typedef union Circle
{
    double area;
    int radius;
    double pi = 3.14;
};

void AskInfo(Circle more)
{
    Circle *ptr = new Circle;

    std::cout << "Enter radius here: ";
    std::cin >> ptr->radius;
}

void calculate(Circle more)
{
    Circle *ptr = new Circle;

    ptr->area = ptr->pi * pow(ptr->radius, 2.0);
    std::cout << "The area of circle is: " << ptr->area;
}

int main()
{
    std::cout << std::fixed << std::showpoint << std::setprecision(2);

    Circle test;
    AskInfo(test);
    calculate(test);

    std::cout << std::endl;
    std::cout << &test.radius;

    return 0;
}