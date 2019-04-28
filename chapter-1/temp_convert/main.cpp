#include <iostream>
using namespace std;

int main()
{
    double ctemp = 0;
    double ftemp = 0;
    std::cout << "Enter temperature in celsius";
    std::cin >> ctemp;
    ftemp = (ctemp * 1.8) / 32;
    std::cout << "The temp in fahrenhiet is" << ftemp;
}