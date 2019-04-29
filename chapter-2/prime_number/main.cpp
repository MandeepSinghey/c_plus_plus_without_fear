#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number = 0;
    bool isPrime = true;

    std::cout << "Pick a number: ";
    std::cin >> number;

    for (int i = 2; i < sqrt(number); i++)
    {
        if (number % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime == true)
    {
        std::cout << "Number is prime\n";
    }
    else
    {
        std::cout << "Number is not prime\n";
    }
}