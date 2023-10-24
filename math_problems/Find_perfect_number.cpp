// Cho số nguyên dương n. Kiểm tra xem n có phải số hoàn thiện hay không.
// Condition of perfect number: Sum of it divisors must be themselves
#include <iostream>

int main()
{
    int n;
    int P = 0;

    std::cout << "Please enter a positive integer: ";
    std::cin >> n;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            P = P + i;
        }
    }
    if (P == n)
        std::cout << n << " is perfect number";
    else
        std::cout << n << " is not a perfect number";

    return 0;
}