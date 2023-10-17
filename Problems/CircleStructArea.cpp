#include <iostream>
#include <cmath>

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

void result(Circle r)
{
    std::cout << r.area;
}

int main()
{
    Circle info = getNumber();

    double calculated = calculate(info.diameter, info.radius);
    
    result(info);

    return 0;
}