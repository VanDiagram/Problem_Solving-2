// tính S(n) = x + x^2/2! + x^3/3! + ... + x^n/N!

#include <iostream>

int main()
{
    double S = 0.0;
    int n;
    int x;

    std::cout << "Enter element: ";
    std::cin >> n;

    std::cout << "Enter x value: ";
    std::cin >> x;

    int i = 1;
    double P = 1.0;
    double T = 1.0;

    while (i <= n)
    {
        T = T * i;
        P = P * x;
        S = S + (P / T);
        i++;
    }
    std::cout << S;
}