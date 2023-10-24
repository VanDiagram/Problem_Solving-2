// Tính tích tất cả ước số lẻ của số nguyên dương n
#include <iostream>

int main()
{
    int P = 1;
    int n;

    std::cout << "Please enter positive integer: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i % 2 == 1)
            {
                P = P * i;
            }
        }
    }
    std::cout << std::endl;

    std::cout << "Multiply of odd divisiors of positive integer is: " << P;
    return 0;
}