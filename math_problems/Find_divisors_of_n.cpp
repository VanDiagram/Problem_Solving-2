// Liệt kê tất cả "ước số" nguyên dương n

#include <iostream>

int main()
{
    int n;
    int i = 1;

    std::cout << "Enter element n: ";
    std::cin >> n;

    while (i <= n)
    {
        if (n % i == 0)
        {
            std::cout << n / i;
        }

        i++;
    }

    return 0;
}