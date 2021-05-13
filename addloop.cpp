// Copyright (c) 2021 Jenoe Balote All Rights Reserved
//
// Created by: Jenoe Balote
// Created on: May 2021
// This program runs an add loop for positive integers

#include <iostream>
#include <string>

main() {
    // this function runs the grandchild dating program
    std::string stringInteger;
    int numInteger;
    int loopCounter = 0;
    int total = 0;

    // input
    std::cout << "Welcome!" << std::endl;
    std::cout << "Enter a positive integer: ";
    std::cin >> stringInteger;

    // process
    try {
        numInteger = std::stoi(stringInteger);
        while (loopCounter <= numInteger) {
            total = total + loopCounter;
            loopCounter = loopCounter + 1;
        }
        std::cout << "The sum is " << total << std::endl;
    }
    catch (std::invalid_argument) {
    // output
        std::cout << "" << stringInteger << " is invalid data." << std::endl;
    }
    std::cout << "Thanks for participating!"<< std::endl;
}
