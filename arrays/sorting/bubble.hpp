#include "../helpers.hpp"

void bubble_sort(V& vec) {
    size_t v_size = vec.size();
    if (v_size == 0 || v_size == 1) return; 

    for (size_t end_index = v_size - 1; end_index != 0; --end_index)
        for (size_t i = 0; i != end_index; ++i)
            if (vec[i] > vec[i + 1])
                std::swap(vec[i], vec[i + 1]);
}

// void cocktail_sort(V& vec) {
    
// }

// void comb_sort(V& vec) {
    
// }