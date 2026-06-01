#include "../helpers.hpp"

void bubble_sort(V& v) {
    for (auto last = v.end() - 1; last != v.begin(); --last)
        for (auto cur = v.begin(); cur != last; ++cur)
            if (*cur > *(cur + 1))
                std::swap(*cur, *(cur + 1));
}