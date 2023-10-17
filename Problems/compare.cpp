#include <iostream>
#include <string>
#include <vector>
using namespace std;

void FindLocation(const string &Str, const string &key)
{
    vector<int> position;
    size_t pos = Str.find(key, 0);

    while (pos != string::npos)
    {
        position.push_back(pos);
        pos = Str.find(key, pos + 1);
    }

    if (position.empty())
    {
        cout << "Khong tim thay key: '" << key << "' trong chuoi." << endl;
    }
    else
    {
        cout << "String da nhap: " << Str << endl;
        cout << "Key da nhap: " << key << endl;
        cout << "Tai vi tri: ";
        for (int i = 0; i < position.size(); i++)
        {
            cout << position[i];
            if (i < position.size() - 1)
                cout << " - ";
        }
        cout << endl;
    }
}

void replaceKeyStr(string &Str, const string &key, const string &newStr)
{
    size_t pos = Str.find(key);
    while (pos != string::npos)
    {
        Str.replace(pos, key.length(), newStr);
        pos = Str.find(key, pos + newStr.length());
    }
    cout << "Chuoi moi: " << Str << endl;
}

int main()
{
    string inputStr, key, newStr;
    cout << "Nhap vao day mot xau ky tu: ";
    getline(cin, inputStr);

    cout << "Nhap vao day xau ky tu con: ";
    getline(cin, key);

    FindLocation(inputStr, key);

    cout << "Nhap vao day xau ky tu moi: ";
    getline(cin, newStr);

    replaceKeyStr(inputStr, key, newStr);

    return 0;
}
