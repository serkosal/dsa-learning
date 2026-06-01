#include "arrays/searching/searching.hpp"

#include <algorithm>
#include <limits>
#include <string>
#include <iostream>


const size_t VEC_SIZE = 25;

int main() {
    
    srand(time(NULL));
    V v; v.reserve(VEC_SIZE);
    for (size_t i = 0; i < VEC_SIZE; ++i)
        v.push_back(rand() % 256);
    std::sort(v.begin(), v.end());

    print_vec(v);

    while (true) {
        std::string in;
        std::cin >> in;

        try {
            int key = std::stoi(in);

            const auto it = binary_search(v, key);
            
            std::cout << "Element " << in;
            if (it == v.end()) 
                std::cout << " not found\n";
            else
                std::cout << " found at pos: " << it - v.begin() + 1 << "\n";
        }
        catch (std::invalid_argument const& e) {
            std::cout << "You've entered an invalid number!" << "\n";
        }
        catch (std::out_of_range const& e) {
            std::cout << "You've entered a number bigger than: " 
                << std::numeric_limits<int>().max() << "!\n";
        }
        catch (...) {
            std::cout << "Unknown error occured, try again" << "\n";
        }
    }

    return 0;
}