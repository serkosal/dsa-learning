#include "arrays/base/helpers.hpp"

V::const_iterator linear_search(const V& v, int key) {
    for (auto it = v.begin(); it != v.end(); ++it)
        if (key == *it)
            return it;

    return v.end();
}