#include <iostream>
using namespace std;

int getAnIntFromTheUser();
void compareTwoInts (int num1, int num2);
int sumTwoInts (int num1, int num2);

int main ()
{
    int first = getAnIntFromTheUser();
    int second = getAnIntFromTheUser();

    compareTwoInts(first, second);
    total = sumTwoInts (first,second)
    cout << "The sum is: " << total << endl;
    return 0;
}

int getAnIntFromTheUser()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    return number;
}
  void compareTwoInts(int num1, int num2)
{
    if (num1 > num2)
        cout << num1 << "is greater than" << num2 << endl;
    else if (num 2 > num1)
        cout << num2 << " is greater than" << num1 << end1;
}
int sumTwoInts (in num1, int num2)
{
    return num1 + num2;
}

// Created by jerry on 2/6/2026.
//