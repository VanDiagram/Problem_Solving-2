#include <iostream>
#define LIMIT 100

void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter element #" << (i + 1) << ": ";
        std::cin >> arr[i];
    }
}

void output(int arr[], int n)
{
    std::cout << "Array: [ ";
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "]";
    std::cout << std::endl;
}

double max_value(int arr[], int n)
{
    double max = arr[0];
    for (int index = 0; index < n; index++)
    {
        if (arr[index] > max)
        {
            max = arr[index];
        }
    }
    return max;
}

int main()
{
    int n = 0;
    std::cout << "How much element do you want: ";
    std::cin >> n;
    int *arr = new int[LIMIT];

    input(arr, n);
    output(arr, n);

    std::cout << "Max value is: " << max_value(arr, n);
    delete[] arr;

    return 0;
}