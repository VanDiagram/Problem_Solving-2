#include <iostream>
#include <cmath>
#include <iomanip>

struct Circle
{
    double diameter;
    double radius;
    double area;
};

Circle getNumber()
{
    Circle num;

    std::cout << "Enter diameter of circle: ";
    std::cin >> num.diameter;

    std::cout << "Enter the radius of circle: ";
    std::cin >> num.radius;

    return num;
}

double calculate(double x, double y)
{
    return x * pow(y, 2.0) * M_PI;
}

int main()
{
    //Call struct 
    Circle info = getNumber();

    //Manipulate digit number
    std::cout << std::fixed << std::showpoint << std::setprecision(2);

    double calculated = calculate(info.diameter, info.radius);
    std::cout << calculated;

    return 0;
}