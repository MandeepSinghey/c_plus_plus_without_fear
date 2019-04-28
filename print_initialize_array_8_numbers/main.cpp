#include <iostream>
using namespace std;
int main()
{
    int list_of_numbers[8];
    int sum = 0;
    for (int i = 0; i < 8; i++)
    {
        cout << "Enter a number :";
        cin >> list_of_numbers[i];
        cout << "The no entered is " << list_of_numbers[i] << endl;
        sum += list_of_numbers[i];
    }
    cout << "Sum is :" << sum << endl;
}