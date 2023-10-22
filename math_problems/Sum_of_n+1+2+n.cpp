// tính S(n) = 1 + 1.2 + 1.2.3 + ... + 1.2.3..N
#include <iostream>

int main()
{
    int n;
    long S = 0;
    int P = 1;

    std::cout << "Enter element n: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        P = P * i;
        S = S + P;
    }
    std::cout << S;
    return 0;
}