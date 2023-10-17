#include <iostream>

struct Rectangle
{
    double length;
    double width;
    double area;
};

double Calculate(double x, double y)
{
    return (x * y);
}

void showRect(Rectangle r)
{
    std::cout << "Your length: " << r.length << std::endl;
    std::cout << "Your width: " << r.width << std::endl;
    std::cout << "Area of the rectangle box: " << r.area << std::endl;
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