#include <iostream>
#define MAX 100
using namespace std;

void input(int arr[], int a)
{

    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
}

void Result(int arr[], int a)
{
    int key;
    cout << "Enter key: ";
    cin >> key;

    bool found = false;
    for (int i = 0; i < a - 1; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            if (arr[i] + arr[j] == key)
            {
                cout << "[" << i << "," << j << "] ";
                found = true;
            }
        }
    }
    if (!found)
    {
        cout << "Can't find key";
    }
}

int main()
{
    int a;
    int arr[MAX];

    cout << "Enter elements inside array: ";
    cin >> a;

    input(arr, a);
    Result(arr, a);

    // Goal enter [ 4, 5, 6] - Key: [11]
    // Output: arr[1] + arr[2]
    return 0;
}