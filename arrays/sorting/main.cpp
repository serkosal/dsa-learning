#include "../helpers.hpp"
#include "bubble.hpp"

int main() {
    
    V v({5, 4, 3, 2, 1, 8, 7});
    print_vec(v);

    bubble_sort(v);
    print_vec(v);
    
}