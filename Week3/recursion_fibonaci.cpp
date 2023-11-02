#include <iostream>

long Fibonaci(int n)
{
    if (n <= 2)
    {
        return 1;
    }
    return Fibonaci(n - 1) + Fibonaci(n - 2);
}

int main()
{
    int n;
    std::cin >> n;

    std::cout << Fibonaci(n) << std::endl;
    for (int i = 1; i <= n; i++)
    {
        std::cout << Fibonaci(i) << " `";
    }

    return 0;
}