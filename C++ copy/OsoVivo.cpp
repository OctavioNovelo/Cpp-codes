#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
bool rightSide=true;

long long height, width;
int main()
{
    cin >> height >> width;
    cout << std::string(width, '#');
    cout << "\n";
    height--;
    while (height >= 2)
    {
        if(rightSide)
        {
            cout << std::string(width - 1, '.');
            cout << "#";
            rightSide = false;
        }
        else
        {
            cout << "#";
            cout << std::string(width - 1, '.');
            rightSide = true;
        }
        cout << "\n";
        cout << std::string(width, '#');
        cout << "\n";
        height = height-2;
    }
    return 0;
}