#include <iostream>

int Rer(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + Rer(n - 1);
}

int main()
{
    int n;
    std::cin >> n;

    std::cout << Rer(n);
    return 0;
}