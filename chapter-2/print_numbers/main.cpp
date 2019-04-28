#include <iostream>
using namespace std;

int main()
{
    int start_number = 0;
    int end_number = 0;
    int reverse_counter = 0;
    std::cout << "Enter start number for printing: ";
    std::cin >> start_number;
    std::cout << "Enter end number for printing: ";
    std::cin >> end_number;
    reverse_counter = start_number;
    std::cout << "Even Numbers forward\n";
    while (start_number <= end_number)
    {
        if (start_number % 2 == 0)
        {
            std::cout << start_number << "\n";
        }
        start_number++;
    }

    std::cout << "Odd Numbers reverse\n";
    while (end_number >= reverse_counter)
    {
        if (end_number % 2 != 0)
        {
            std::cout << end_number << "\n";
        }
        end_number--;
    }
}