#include "../helpers.hpp"

void insertion_sort(V& v) {

    for (
        auto unsorted = v.begin() + 1; 
        unsorted != v.end(); 
        ++unsorted
    ) {
        // find swap
        auto swap = unsorted - 1;
        while (swap >= v.begin() && *swap > *unsorted)
            --swap;
        swap = swap + 1;

        // rotate
        auto el = *unsorted;
        for (auto k = unsorted; k != swap; --k)
            *k = *(k - 1);

        *swap = el;
    }
}
