#include <bits/stdc++.h>
using namespace std;

int main()
{
    int width = 5;
    int length = 7;

    for (int i = 0; i < length; i++)
    {
        cout << "-";
    }
    cout << endl;
    for (int i = 0; i < width - 2; i++)
    {
        cout << "*";
        for (int j = 0; j < length - 2; j++)
        {
            cout << " ";
        }
        cout << "*" << endl;
    }

    for (int i = 0; i < length; i++)
    {
        cout << "-";
    }
    cout << endl;
}