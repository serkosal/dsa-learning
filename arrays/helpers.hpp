#pragma once

#ifndef ARRAYS_HELPERS
#define ARRAYS_HELPERS

#include <iostream> 
#include <vector>

using V = std::vector<int>;

void init_from_cin(V& vec) {
    vec.clear();

    // handling input
    // size_t arr_size;
    // {
    //     std::cin >> arr_size;

    //     in.reserve(arr_size);
    // }
    // for (size_t i = 0; i < arr_size; ++i) {
    //     int temp;
    //     std::cin >> temp;
    //     in.push_back(temp);
    // }
}

void print_vec(const V& vec) {
    for (const auto& el : vec)
        std::cout << el << " ";

    std::cout << "\n";
}

#endif