#include <iostream>

struct Rectangle
{
    double length;
    double width;
    double area;
};

double Calculate(double &x, double &y)
{
    return (x * y);
}

void showRect(Rectangle r)
{
    std::cout << r.length << std::endl;
    std::cout << r.width << std::endl;
    std::cout << r.area << std::endl;
}

int main()
{
    Rectangle box;
    double *x = &box.length;
    double *y = &box.width;

    std::cout << "Enter length and width: ";
    std::cin >> *x >> *y;
    box.area = Calculate(*x, *y);

    showRect(box);

    return 0;
}