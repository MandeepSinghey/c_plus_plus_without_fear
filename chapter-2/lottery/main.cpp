#include <iostream>
using namespace std;

int main()
{
    int number = 0;

    std::cout << "Pick a lottery number: ";
    std::cin >> number;

    std::cout << "Lottery Draw \n";

    if (number >= 0 && number <= 100)
    {
        std::cout << "You won Lottery"
                  << "\n";
    }
    else
    {
        std::cout << "Lost ! try next time\n";
    }
}