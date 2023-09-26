// Copyright (c) 2023 Zak Goneau All rights reserved.
//
// Created by: Zak Goneau
// Created on: Sep. 26, 2023
// This program calculates the area and perimeter of a rectangle
// with user given dimensions in cm.

#include <iostream>

// declaring variables
float length, width, area, perimeter;

int main() {
    // get input from user
    std::cout << "This program calculates the area and perimeter of a rectangle.\n";
    std::cout << "Please enter a length (cm): \n";
    std::cin >> length;
    std::cout << "Please enter a width (cm): ";
    std::cin >> width;

    // calculate the area
    area = length * width;
    perimeter = 2 * (length + width);

    // display calculated area and perimeter
    std::cout << std::endl;
    std::cout << "The area of the rectangle is " << area << "cm^2.\n";
    std::cout << "The perimeter of the rectangle is " << perimeter << "cm.\n";
}
