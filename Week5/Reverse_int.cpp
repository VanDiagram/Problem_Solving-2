// If overflow which -2 ^ 31 <= example <= 2^31-1, return 0

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        long rev = 0;

        while (x != 0)
        {
            int dig = x % 10;
            rev = rev * 10 + dig;
            x /= 10;
        }
        if (rev < pow(-2, 31) || rev > (pow(2, 31) - 1))
        {
            return 0;
        }
        else
        {
            return (int)rev;
        }
    }
};

int main()
{
    Solution solution;
    int example = 1534236469;

    int result = solution.reverse(example);
    if (result < pow(-2, 31) || result > (pow(2, 31) - 1))
    {
        cout << "0";
    }
    else
    {
        cout << result;
    }
    return 0;
}