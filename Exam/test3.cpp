// test 3:
#include <iostream>
#include <cstring>
#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE], reverse[MAX_SIZE];
    int len, i, index, wordStart, wordEnd;

    std::cout << "Enter any string: ";
    std::cin.getline(str, 100);

    len = strlen(str);
    index = 0;
    for (i = len - 1; i >= 0; i--)
    {
        reverse[index] = str[i];
        index++;
    }

    reverse[index] = '\0';
    std::cout << "Original string: "
              << str << std::endl;
    std::cout << "Reversed string: "
              << reverse << std::endl;

    return 0;
}
