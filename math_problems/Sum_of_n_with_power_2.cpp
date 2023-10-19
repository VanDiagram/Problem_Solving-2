//Calculate the S(n) = 1^2 + 2^2 + ... + n^2
#include <iostream>

int main()
{
    int n, i;
    long S = 0;
    i = 1;

    std::cout << "Enter n number: ";
    std::cin >> n;
    while(i <= n)
    {
        S = S + i*i;
        i++;
    }
    std::cout << S;

}