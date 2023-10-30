// count uppercase letters in a string
#include <iostream>

// This function helps finding the length of a string
size_t strlen(const char *input)
{
    size_t length = 0;
    while (input[length] != '\0')
    {
        length++;
    }
    return length;
}

// This function helps finding the uppercase letter
bool isUpper(char input)
{
    return (input >= 'A' && input <= 'Z');
}

int findUppercase(const char *str)
{
    // Create a string scanning start from 0
    int uppercase = 0;

    // Condition for index of scanning, start from 0, lesser than the length of string
    for (int i = 0; i < strlen(str); i++)
    {
        if (isUpper(str[i]))
        {
            uppercase++;
        }
    }
    return uppercase;
}

void display(const char *func)
{
    char *str;
    int upperCase = findUppercase(str);
    std::cout << upperCase;
}

int main()
{
    const char *count = "SbexERs";

    int result = findUppercase(count);
    std::cout << " The number of uppercase letters found in string: " << result << std::endl;

    return 0;
}