// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2019
// This program display a leap year

#include <iostream>
#include <string>

main() {
    // this function display a leap year
    std::string yearAsString;
    int yearAsNumber;

    // input
    std::cout << "Enter the year (integer): ";
    std::cin >> yearAsString;

    // process & output
    try {
        yearAsNumber = std::stoi(yearAsString);
        if (yearAsNumber % 4 == 0) {
            if (yearAsNumber % 100 == 0) {
                if (yearAsNumber % 400 == 0) {
                    std::cout << "This year is a leap year!" << std::endl;
                } else {
                    std::cout << "This year isn't a leap year." << std::endl;
                }
            } else {
                std::cout << "This year is a leap year!" << std::endl;
            }
        } else {
            std::cout << "This year isn't a leap year." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "It is not an integer";
    }
}
