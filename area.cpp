// Copyright 2020 MTHS
// Author: Feyi Akomolafe
//  This program calculates the area of a heart
// with user input

#include <math.h>
#include <iostream>

int main() {
    // this function calculates area 
    int length;
    int area;
    int radius;

    // input
    std::cout << "Enter length of the square (mm): ";
    std::cin >> length;

    // process
    area = length * length + 3.14 *pow(radius, 2);

    // output
    std::cout << "" << std::endl;
    std::cout << "Area is " << area << " mm²." << std::endl;
    std::cout << "\nDone." << std::endl;
}
