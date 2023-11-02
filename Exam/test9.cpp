#include <iostream>
#include <cstring>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str[MAX_SIZE];
    char word[MAX_SIZE];
    int i, j, found = 0;
    int strLen, wordLen;

    /* Input string and word from user */

    std::cout << "Enter any string: ";
    std::cin.getline(str, MAX_SIZE);

    std::cout << "Enter any word to search: ";

    std::cin.getline(word, MAX_SIZE);

    strLen = strlen(str);
    wordLen = strlen(word);

    /* YOUR CODE HERE */
    for (i = 0; i <= strLen - wordLen; i++)
    {
        for (j = 0; j < wordLen; j++)
        {
            if (str[i + j] != word[j])
            {
                break;
            }
        }
        if (j == wordLen)
        {
            found++;
        }
    }

    std::cout << "The word '" << word << "' occurs " << found << " times in the string.";
    return 0;
}