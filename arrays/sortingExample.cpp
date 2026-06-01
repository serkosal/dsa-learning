#include "sortings.hpp"

int main() {
    
    V v({5, 4, 3, 2, 1, 8, 7});
    print_vec(v);

    auto t = v;
    bubble_sort(t);
    print_vec(t);

    t = v;
    insertion_sort(t);
    print_vec(t);

    t = v;
    selection_sort(t);
    print_vec(t);
}