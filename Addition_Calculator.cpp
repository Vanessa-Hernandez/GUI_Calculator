#include <iostream>

int main() {
    double First_num, Second_num, Final_Result;
    char operation;

    std::cout << "first #: ";
    std::cin >> First_num;

    std::cout << "Second #: ";
    std::cin >> Second_num;

    std::cout << "Operation (+, -, *, /): ";
    std::cin >> operation;

    if (operation == '+') {
        Final_Result = First_num + Second_num;
        std::cout << "Sum: " << Final_Result << std::endl;
    } else if (operation == '-') {
        Final_Result = First_num - Second_num;
        std::cout << "Difference: " << Final_Result << std::endl;
    } else if (operation == '*') {
        Final_Result = First_num * Second_num;
        std::cout << "Product: " << Final_Result << std::endl;
    } else if (operation == '/') {
        if (Second_num != 0) {
            Final_Result = First_num / Second_num;
            std::cout << "Quotient: " << Final_Result << std::endl;
        } else {
            std::cout << "Error: Division by zero is not allowed." << std::endl;
        }
    } else {
        std::cout << "Invalid operation!" << std::endl;
    }
    
    return 0;
}
