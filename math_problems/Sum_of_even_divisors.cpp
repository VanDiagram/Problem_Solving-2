// Tính tổng ước số chẵn
#include <iostream>

int main()
{
    int n;
    long P = 0;
    int u = 0;
    int i = 1;

    std::cout << "Enter element n: ";
    std::cin >> n;

    for (i = 1; i <= n; i++)
    {

        if ((n % i == 0))
        {
            std::cout << i << " ";
            if (i % 2 == 0)
            {
                P = P + i;
            }
        }
    }
    std::cout << std::endl;

    std::cout << "Sum of even divisors: ";
    std::cout << P;

    return 0;
}