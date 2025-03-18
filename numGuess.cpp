// Copyright (c) 2025 Dylan Mutabazi All rights reserved
//
// Created by Dylan Mutabazi
// Created March 2025
// This program makes the user guess a number between 1 and 10
#include <iostream>

int main() {
    // creates variable userGuesser and constant Number
    int userGuesser;
    const int NUMBER = 2;

    // asks for user to guess a number between 1 and 10
    std::cout << "Guess a number between 1 and 10: ";
    std::cin >> userGuesser;

    // if the number guessed was correct it outputs good job
    if (userGuesser == NUMBER) {
        std::cout << "Good job" << std::endl;
    }

    // if the number guessed was incorrect it outputs nice try
    if (userGuesser != NUMBER) {
        std::cout << "Nice try but your number is " << NUMBER;
        std::cout << "" << std::endl;
    }
}
