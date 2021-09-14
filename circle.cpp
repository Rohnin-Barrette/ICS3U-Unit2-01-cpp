// Copyright (c) 2021 Rohnin Barrette rights reserved
//
// Created by: Mr. Coxall
// Created on: Sep 2021
// This program calculates the area and
// perimeter of a circle with the radius 15mm

#include <iostream>
#include <cmath>

int main() {
    std::cout << "If a circle has a radius of 15mm: " << std::endl;
    std::cout << std::endl;
    std::cout << "Area is " << (M_PI * pow(15, 2)) << "mm²." << std::endl;
    std::cout << "Perimeter is " << (2* M_PI * 15) << "mm." << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;

    return 0;
}

