// Tính S(n) = x + x^2 + x^3 + ... + x^n;
#include <iostream>

int main()
{
    int S = 0;
    int n;
    int i = 1;
    int x;
    int P = 1;

    std::cout << "Enter element n: ";
    std::cin >> n;

    std::cout << "Enter number x: ";
    std::cin >> x;
    while (i <= n)
    {
        P = P * x;
        S = S + P;
        i++;
    }
    std::cout << S;

    return 0;
}