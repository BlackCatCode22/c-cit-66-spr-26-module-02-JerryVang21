#include <iostream>
using namespace std;

int main()
{
   string text;
    cout << "Enter a string: ";
   getline (cin, text);

    cout << "/nOriginal: " << text << endl;
    cout << "Length:" << text.length () <<endl;

    cout << "Reversed: ";
    for (int i = text.length () - 1; i >=0; i--)

    {
        cout << text[i];
    }
    cout << endl;
    return 0;
}
// Created by jerry on 2/6/2026.
