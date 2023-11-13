// Print from 1 - 100, but multiple of 3 print Fizz
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            std::cout << "Fizz"
                      << " ";
        }
        else
        {
            std::cout << i << " ";
        }
    }
    return 0;
}