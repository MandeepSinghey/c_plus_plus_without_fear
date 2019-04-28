#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    std::cout << "Enter a number to validate it is Evevn or ODD: ";

    std::cin >> number;

    if (number % 2 == 0)
    {
        std::cout << "number is even\n";
    }
    else
    {
        /* code */
        std::cout << "Number is Odd\n";
    }
}