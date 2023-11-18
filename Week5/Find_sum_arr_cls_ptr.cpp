#include <iostream>
#include <vector>
using namespace std;

void input(vector<int *> &numbers)
{
    int amount;

    cout << "Enter amount of element: ";
    cin >> amount;

    for (int i = 0; i < amount; i++)
    {
        int *value = new int;
        cin >> *value;
        numbers.push_back(value);
    }
}

void result(vector<int *> &numbers)
{
    int key;

    cout << "Enter key you want to find: ";
    cin >> key;

    bool found = false;
    for (size_t i = 0; i < numbers.size() - 1; i++)
    {
        for (size_t j = i + 1; j < numbers.size(); j++)
        {
            if (*numbers[i] + *numbers[j] == key)
            {
                cout << "[" << i << "," << j << "]";
                found = true;
            }
        }
    }

    if (!found)
    {
        cout << "Can't find the key: " << key;
    }
}

void delete_ele(vector<int *> &numbers)
{
    for (size_t i = 0; i < numbers.size(); i++)
    {
        delete numbers[i];
    }
    numbers.clear();
}

int main()
{
    // Input: a = 4
    // a = [ 2, 3, 4, 5] key: 9
    // output = [3, 4]
    vector<int *> numbers;

    input(numbers);
    result(numbers);
    delete_ele(numbers);
    return 0;
}