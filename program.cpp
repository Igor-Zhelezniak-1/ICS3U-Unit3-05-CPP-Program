/// Copyright (c) 2021 Igor All rights reserved
//
// Created by: Igor
// Created on: Nov 2021
/// This is program

#include <iostream>
#include <string>

int main() {
    // this is month program
    std::string monthNumberString;
    int monthNumber;

    // input
    std::cout << "Enter number of month(1-12): ";
    std::cin >> monthNumberString;

    monthNumber = atoi(monthNumberString.c_str());

    switch (monthNumber) {
        case 1 :
            std::cout << "January" << std::endl;
            break;
        case 2 :
            std::cout << "February" << std::endl;
            break;
        case 3 :
            std::cout << "March" << std::endl;
            break;
        case 4 :
            std::cout << "April" << std::endl;
            break;
        case 5 :
            std::cout << "May" << std::endl;
            break;
        case 6 :
            std::cout << "June" << std::endl;
            break;
        case 7 :
            std::cout << "July" << std::endl;
            break;
        case 8 :
            std::cout << "August" << std::endl;
            break;
        case 9 :
            std::cout << "September" << std::endl;
            break;
        case 10 :
            std::cout << "October" << std::endl;
            break;
        case 11 :
            std::cout << "November" << std::endl;
            break;
        case 12 :
            std::cout << "December" << std::endl;
            break;
        default :
            std::cout << "This is not number 1-12" << std::endl;
    }

    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
