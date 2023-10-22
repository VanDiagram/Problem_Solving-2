// Tính tổng các ước số của số nguyên dương n
#include <iostream>

int main()
{
    int n;
    int i = 1;
    int P = 0;

    std::cout << "Enter element n: ";
    std::cin >> n;
    int x = n;

    while (i <= n)
    {
        x = n / i;
        if (n % i == 0)
        {
            std::cout << x << " ";
            P = P + i;
        }

        i++;
    }

    while (i <= n)
    {
        if (n % i == 0)
        {
            P = P + i;
        }

        i++;
    }
    std::cout << std::endl;
    std::cout << "Sums of divisors: " << P;

    return 0;
}