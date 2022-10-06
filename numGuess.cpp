// Copyright (c) 2022 Immaculata HS All rights reserved.
//
// Created by: Joseph Kwon
// Created on: Oct 2022
// This program checks if a user's integer guess is correct

#include <iostream>

int main() {
    // declaring the constant for the number the user has to guess
    const int NUMBER = 7;

    int guess;

    // input, get the guess from the user
    std::cout << "Guess a number: $ ";
    std::cin >> guess;
    std::cout << "" << std::endl;

    // process, check if the user's guess matches the number
    // output string if statement is true
    if (guess == NUMBER) {
        std::cout << "Your guess is correct!";
    }

    // process, check if the user's guess does not match the number
    // output string if statement is true
    if (guess != NUMBER) {
        std::cout << "Your guess is wrong!";
    }
}
