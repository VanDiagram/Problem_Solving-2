#include <iostream>

// Function to calculate the length of a C-style string
size_t strlen_custom(const char *str)
{
    size_t length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

// Function to copy a C-style string
char *strcpy_custom(char *destination, const char *source)
{
    char *originalDestination = destination;
    while (*source)
    {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';
    return originalDestination;
}

// Function to concatenate two C-style strings
char *strcat_custom(char *destination, const char *source)
{
    char *originalDestination = destination;
    while (*destination)
    {
        destination++;
    }
    while (*source)
    {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';
    return originalDestination;
}

// Function to compare two C-style strings
int strcmp_custom(const char *str1, const char *str2)
{
    while (*str1 && (*str1 == *str2))
    {
        str1++;
        str2++;
    }
    return *(const unsigned char *)str1 - *(const unsigned char *)str2;
}

int main()
{
    const char *str1 = "Hello";
    const char *str2 = "World";
    char buffer[20];

    std::cout << "Length of \"" << str1 << "\": " << strlen_custom(str1) << std::endl;

    strcpy_custom(buffer, str1);
    std::cout << "Copied string: " << buffer << std::endl;

    strcat_custom(buffer, str2);
    std::cout << "Concatenated string: " << buffer << std::endl;

    std::cout << "Comparison result: " << strcmp_custom(str1, str2) << std::endl;

    return 0;
}
