#include <iostream>
#include <string>
#include <vector>
using namespace std;

void findAndPrintSubstringPositions(const std::string &Str, const std::string &key)
{
    vector<int> position;
    size_t pos = Str.find(key, 0);

    while (pos != std::string::npos)
    {
        position.push_back(pos);
        pos = Str.find(key, pos + 1);
    }

    if (position.empty())
        std::cout << "Khong tim thay string key: "
                  << " '" << key << "  ' ";
    else
    {
        std::cout << "Chuoi da nhap: " << Str << std::endl;
        std::cout << "Chuoi key: " << key << std::endl;
        std::cout << "Vi tri xuat hien: ";
        for (size_t i = 0; i < position.size(); i++)
        {
            std::cout << position[i];
            if (i < position.size() - 1)
                std::cout << " - ";
        }
    }
    std::cout << std::endl;
}

void replaceKeyWithNewString(std::string &text, const std::string &key, const std::string &newString)
{
    size_t pos = text.find(key);
    while (pos != std::string::npos)
    {
        text.replace(pos, key.length(), newString);
        pos = text.find(key, pos + newString.length());
    }
    std::cout << "Chuoi moi: " << text << std::endl;
}

int main()
{
    std::string inputText, key, newString;
    std::cout << "Nhap vao chuoi ki tu: ";
    std::getline(std::cin, inputText);

    std::cout << "Nhap vao chuoi con can tim: ";
    std::getline(std::cin, key);

    findAndPrintSubstringPositions(inputText, key);

    std::cout << "Nhap vao chuoi moi: ";
    std::getline(std::cin, newString);

    replaceKeyWithNewString(inputText, key, newString);

    return 0;
}
