#include "arrays/base/helpers.hpp"

V::const_iterator binary_search(const V& v, int key) {
    
    // int l = 0, r = v.size() - 1;
    auto l = v.begin(), r = v.end() - 1;

    while (l <= r) {

        auto g = l + (r - l) / 2;
        
        if (key == *g)
            return g;
        else if (*g < key)
            l = g + 1;
        else
            r = g - 1;
    }

    return v.end();
}