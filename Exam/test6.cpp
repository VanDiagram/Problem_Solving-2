// test 6:
#include <iostream>
#define MAX_SIZE 100  // Maximum string size
#define MAX_CHARS 255 // Maximum characters allowed

int main()

{

    char str[MAX_SIZE];
    int freq[MAX_CHARS] = {0}; // Store frequency of each character
    int i = 0, max = 0;
    int ascii;

    std::cout << "Enter any string: ";
    std::cin.getline(str, MAX_SIZE);

    // Calculating frequency of each character
    while (str[i] != '\0')
    {
        ascii = (int)str[i];
        freq[ascii] += 1;
        i++;
    }

    // Finding the maximum occurring character
    for (i = 0; i < MAX_CHARS; i++)
    {
        if (freq[i] > freq[max])
        {
            max = i;
        }
    }

    std::cout << "Maximum occurring character is '";
    std::cout << char(max) << "' = " << freq[max] << " times.";
    return 0;
}
