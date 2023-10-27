#include <iostream>
#include <cmath>

int main()
{
    int n;
    double S = pow(2.0, 1.0 / 2);

    std::cout << "Please enter n: ";
    std::cin >> n;
    for (int i = 3.0; i <= n; i++)
    {
        S = pow((i + S) * 1.0, 1.0 / i);
    }
    std::cout << S;

    return 0;
}