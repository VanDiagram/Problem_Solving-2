#include <iostream>
#include <vector>
using namespace std;

void reverseWord(string input)
{
    // Create a vector to store substring of each character seperated by backspace
    vector<string> tmp;

    // Null character that will work under condition
    string str = "";

    for (int i = 0; i < input.length(); i++)
    {
        // If meet back space, count it as a substring
        if (input[i] == ' ')
        {
            tmp.push_back(str);
            str = "";
        }

        // Else, we counting each character and put it into substring
        else
            str += input[i];
    }
    // Adding the last remainder str that has not count due to not having backspace
    tmp.push_back(str);

    // Reverse the order of vector string
    for (int i = tmp.size() - 1; i >= 0; i--)
    {
        cout << tmp[i] << " ";
    }
}

int main()
{
    string example = "I love coding very much";
    reverseWord(example);

    return 0;
}