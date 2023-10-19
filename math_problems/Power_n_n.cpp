#include <iostream>
#include <cctype>

double pow(double *x, int *y)
{
    for(int i = 1; i < *y; i++)
    {
        *x *= *x;
    }
    return *x;
}

int main()
{
    double *x = new double;
    int *y = new int;
    
    do
    { 
        std::cout << "Please enter x and n to calculate, or 'q' to leave: ";
        std::cin >> *x >> *y;
        if(*x < 0)
        {
            std::cout << "The number x must larger than 0";
        }
        else if (toupper('Q'))
        {
            std::cout << "Goodbye ";
        }

        while (*x > 0)
        {
            double result = pow(x, y);
            std::cout << "The result is: " << result << std::endl;
            std::cout << "Do you want to calculate x and n, if not 'q' to leave: ";
            std::cin >> *x >> *y;
        }
        

    } while (*x < 0 && toupper('Q'));

    return 0;
}