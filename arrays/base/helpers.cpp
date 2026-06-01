#include "helpers.hpp"

#include <iostream>

void init_from_cin(V& vec) {

}

void print_vec(const V& vec) {
    for (const auto& el : vec)
        std::cout << el << " ";

    std::cout << "\n";
}
