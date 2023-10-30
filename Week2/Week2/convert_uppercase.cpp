#include <iostream>

size_t Strlen(char *input)
{
    size_t length = 0;
    while (input[length] != '\0')
    {
        length++;
    }
    return length;
}

char toUpper(char str)
{
    if (str >= 'a' && str <= 'z')
    {
        return str - 32;
    }
    return str;
}

void convertUpper(char *source)
{
    int length = Strlen(source);
    for (int i = 0; i < length; i++)
    {
        source[i] = toUpper(source[i]);
    }
}

int main()
{
    char test[] = "aristole";
    std::cout << "The origin string: " << test << std::endl;

    convertUpper(test);
    std::cout << "The uppercase string: " << test << std::endl;

    return 0;
}