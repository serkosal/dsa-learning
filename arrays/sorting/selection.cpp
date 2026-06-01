#include "arrays/base/helpers.hpp"

void selection_sort(V& v) {

    for (
        auto unsorted = v.begin(); 
        unsorted != v.end(); 
        ++unsorted
    ) {

        // find the minimum
        auto min = unsorted;
        auto min_value = *unsorted;
        for (auto i = unsorted + 1; i < v.end(); ++i)
            if (*i < min_value) {
                min = i;
                min_value = *i;
            }
        
        // replace
        std::swap(*min, *unsorted);
    }
}
