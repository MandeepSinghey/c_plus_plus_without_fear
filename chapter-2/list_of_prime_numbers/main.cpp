#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number = 0;
    bool isPrime = true; //value is 1

    std::cout << "Enter number: ";
    std::cin >> number;

    for (int n = 0; n <= number; n++)
    {
        for (int i = 2; i <= sqrt(n); ++i)
        {

            if (n % i == 0)
            {
                isPrime = false; //set value 0
            }
        }
        if (isPrime == true)
        {
            std::cout << n << " - is prime\n";
        }
        else
        {

            isPrime = true;
        }
    }
}