#include <iostream>

int proRer(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * proRer(n - 1);
}

int main()
{
    int n;
    std::cin >> n;

    std::cout << proRer(n);
    return 0;
}