// Factorial number calculation with the general formula of n * (n-1)!

#include <iostream>

int Fac_num(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * Fac_num(n - 1);
}

int main()
{
    int n;
    std::cin >> n;

    std::cout << Fac_num(n);
    return 0;
}