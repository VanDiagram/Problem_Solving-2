// Sum of pow(N, N + 1)

#include <iostream>
#include <cmath>

int main()
{
    double S = pow(1.0, 1.0 / 2);
    double P = 1.0;
    int n;

    std::cout << "Please enter number elemtn n: ";
    std::cin >> n;

    for (int i = 2.0; i <= n; i++)
    {
        P = P * i;
        S = pow((P + S) * 1.0, 1.0 / (i + 1.0));
    }
    std::cout << S;

    return 0;
}