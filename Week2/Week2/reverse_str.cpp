// Reverse a C-style string in place
#include <iostream>

size_t strlen(const char *str)
{
    size_t length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

void reverseStr(char *str)
{
    // Set length for string
    int length = strlen(str);

    // Condition of index start from 0, and end with the reverse condition
    for (int i = 0; i < length / 2; i++)
    {
        char tmp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = tmp;
    }
}

int main()
{
    char test[] = "CoolDude";
    int size = strlen(test);

    std::cout << "The origin string is: " << test << std::endl;
    std::cout << "The length of string is: " << size << std::endl;

    reverseStr(test);
    std::cout << "Reverse string is: " << test;

    return 0;
}