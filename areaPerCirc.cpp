// Copyright (c) 2022 Patrice Pat-Odita All rights reserved.
//
// Created by: Patrice Pat-Odita
// Created on: Sep. 21, 2022
// This program calculates and displays the area
// perimeter of a circle with radius 16 mm.
#include <cmath>
#include <iostream>

int main() {
    std::cout << "For a circle that has a radius\n";
    std::cout << "of 16mm:\n";
    std::cout << "\n";
    std::cout << "Area = " << M_PI * pow(16, 2) << " cm^2\n";
    std::cout << "Perimeter = " << 2 * M_PI * 16 << " cm\n";
}
