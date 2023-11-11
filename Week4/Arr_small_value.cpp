#include <iostream>
#include <vector>
using namespace std;

vector<int> Arr(int n)
{
    vector<int> adding;

    int value;
    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter value #" << (i + 1) << ": ";
        std::cin >> value;
        adding.push_back(value);
    }
    return adding;
}

int small_Value(vector<int> arr, int n)
{
    int small = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[small])
        {
            small = i;
        }
    }
    return small + 1;
}

int main()
{
    int n;
    std::cout << "Enter number of element you want to enter: ";
    std::cin >> n;

    vector<int> arr = Arr(n);
    std::cout << "The smallest value located at: " << small_Value(arr, n);

    return 0;
}