// Enter positive integer n, which is element number
#include <iostream>

int main()
{
    int n;
    int i;
    std::cout << "Enter positive integer: ";
    std::cin >> n;

    if (n < 2)
    {
        std::cout << "This is not element number";
    }
    else if (n == 2 || n == 3)
        std::cout << n << " is an element number";
    else if (n % 2 == 0)
    {
        std::cout << n << " is not an element number";
    }
    else
    {
        for (int i = 3; i <= n; i += 2)
        {
            if (n % i == 0)
                break;
        }
        if (i == n)
        {
            std::cout << n << " is an element number";
        }
    }
    return 0;
}