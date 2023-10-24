// Tính căn bậc 2 của 2 + căn bậc 2 của 2 + căn bậc 2 của n lần căn bậc 2
#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    int n;
    double C = 0;
    double S = sqrt((double)2);
    double sqr;
    std::cout << std::fixed << std::showpoint << std::setprecision(2);

    std::cout << "Enter element n: ";
    std::cin >> n;

    for (int i = 2; i <= n; i++)
    {
        S = sqrt(2 + S);
    }
    std::cout << " Sum of sqrt of n: " << S;

    return 0;
}