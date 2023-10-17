#include <iostream>

struct Rectangle
{
    double length;
    double width;
    double area;
};

double Calculate(double x, double y)
{
    return x * y;
}

int main()
{
    Rectangle box;
    int x = box.length;
    int y = box.width;

    std::cout << "Enter length and width: ";
    std::cin >> x >> y;
    box.area = Calculate(box.length, box.width);
}