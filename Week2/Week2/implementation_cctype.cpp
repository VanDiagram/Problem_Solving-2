#include <iostream>

// Function to check if the character is alphanumeric
bool isalnum_custom(char c)
{
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9');
}

// Function to check if the character is alphabetic
bool isalpha_custom(char c)
{
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

// Function to check if the character is a blank character (space or tab)
bool isblank_custom(char c)
{
    return c == ' ' || c == '\t';
}

// Function to check if the character is a control character
bool iscntrl_custom(char c)
{
    return (c >= 0 && c <= 31) || c == 127;
}

// Function to check if the character is a digit
bool isdigit_custom(char c)
{
    return c >= '0' && c <= '9';
}

// Function to check if the character is a lowercase letter
bool islower_custom(char c)
{
    return c >= 'a' && c <= 'z';
}

// Function to check if the character is a punctuation character
bool ispunct_custom(char c)
{
    return (c >= 33 && c <= 47) || (c >= 58 && c <= 64) || (c >= 91 && c <= 96) || (c >= 123 && c <= 126);
}

// Function to check if the character is a whitespace character
bool isspace_custom(char c)
{
    return c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r';
}

// Function to check if the character is an uppercase letter
bool isupper_custom(char c)
{
    return c >= 'A' && c <= 'Z';
}

// Function to check if the character is a hexadecimal digit
bool isxdigit_custom(char c)
{
    return (c >= '0' && c <= '9') || (c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f');
}

char toupper(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return c - 32;
    }
    return c;
}

char tolower(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return c + 32;
    }
    return c;
}

int main()
{
    char test_char = 'A';
    std::cout << "isalnum_custom('A'): " << isalnum_custom(test_char) << std::endl;
    std::cout << "isalpha_custom('A'): " << isalpha_custom(test_char) << std::endl;
    std::cout << "isblank_custom('A'): " << isblank_custom(test_char) << std::endl;
    std::cout << "iscntrl_custom('A'): " << iscntrl_custom(test_char) << std::endl;
    std::cout << "isdigit_custom('A'): " << isdigit_custom(test_char) << std::endl;
    std::cout << "islower_custom('A'): " << islower_custom(test_char) << std::endl;
    std::cout << "ispunct_custom('A'): " << ispunct_custom(test_char) << std::endl;
    std::cout << "isspace_custom('A'): " << isspace_custom(test_char) << std::endl;
    std::cout << "isupper_custom('A'): " << isupper_custom(test_char) << std::endl;
    std::cout << "isxdigit_custom('A'): " << isxdigit_custom(test_char) << std::endl;

    return 0;
}
