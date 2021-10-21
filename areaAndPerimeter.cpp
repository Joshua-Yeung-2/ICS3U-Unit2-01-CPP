// copyright (c) 2020 Joshua Yeung All rights reserved

// Created by: Joshua Yeung
// Created on September 2021
// This program calculates area and perimeter of circle
// With radius 15mm


#include <iostream>
#include <cmath>

int main() {
    // This function calculates area and perimeter of circle
    std::cout << "If a circle has a radius of 15mm: " << std::endl;
    std::cout << std::endl;
    std::cout << "Area is " << (M_PI * pow(15, 2)) << " mm²." << std::endl;
    std::cout << "Perimeter is " << (2 * M_PI * 15) << " mm." << std::endl;
    std::cout << "" <<std::endl;
    std::cout << "Done." << std::endl;
}
