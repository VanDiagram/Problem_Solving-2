#include <iostream>
#include <cctype>
#define MAX_SIZE 100

void input(int arr[], int *n)
{
    int i = 0;
    std::cout << "Enter number you want: ";
    std::cin >> *n;
    while (i < *n)
    {
        if (*n > 0 && *n <= MAX_SIZE)
            std::cout << "Array #" << (i + 1) << " :";
        std::cin >> arr[i];
        i++;
    }
}

int SumEven(int arr[], int n)
{
    // Make recursive condition so the programme won't run infinitely
    if (n == 0)
    {
        return 0;
    }

    // When condition are true, start calculating
    unsigned int s = SumEven(arr, n - 1);
    if (arr[n - 1] % 2 == 0)
    {
        s = s + arr[n - 1];
    }
    return s;
}

void output(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int n;
    int *arr = new int[MAX_SIZE];

    input(arr, &n);
    output(arr, n);

    int Sum = SumEven(arr, n);
    std::cout << "Summation of even number in array: " << Sum;

    delete[] arr;
    return 0;
}