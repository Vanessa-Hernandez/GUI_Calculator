#include <iostream>

int main() {
    double First_num, Second_num, Final_Result;
    char operation;

    std::cout << "first #: ";
    std::cin >> First_num;

    std::cout << "Second #: ";
    std::cin >> Second_num;

    Final_Result = First_num + Second_num;
    std::cout << "Sum: " << Final_Result << std::endl;
    
    return 0;
}