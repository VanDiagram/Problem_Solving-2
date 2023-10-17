#include <iostream>
#include <string>
#include <vector>
using namespace std;

void FindLocation(const string &Str, const string &key)
{
    vector<int> position;
    int pos = Str.find(key, 0);

    while (pos != std::string::npos)
    {
        position.push_back(pos);
        pos = Str.find(key, pos + 1);
    }

    if (position.empty())
        std::cout << " Khong tim thay key: "
                  << " '  " << key << " ' " << endl;
    else
    {
        std::cout << " String da nhap: " << Str << endl;
        std::cout << " Key da nhap: " << key << endl;
        std::cout << " Tai vi tri: ";
        for (int i = 0; i < position.size(); i++)
        {
            std::cout << position[i];
            if (i < position.size() - 1)
                std::cout << " - ";
        }
        cout << endl;
    }
}

void replaceKeyStr(string &Str, const string &key, const string &newStr)
{
    size_t pos = Str.find(key);
    while (pos != std::string::npos)
    {
        Str.replace(pos, key.length(), newStr);
        pos = Str.find(key, pos + newStr.length());
    }
    std::cout << " Chuoi moi: " << key << std::endl;
}

int main()
{
    std::string inputStr, key, newStr;
    std::cout << "Nhap vao day mot xau ky tu: ";
    getline(cin, inputStr);

    std::cout << "Nhap vao day xau ky tu con: ";
    getline(cin, key);

    FindLocation(inputStr, key);

    std::cout << "Nhap vao day ky tu moi: ";
    getline(cin, newStr);

    replaceKeyStr(inputStr, key, newStr);

    return 0;
}