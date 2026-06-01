#pragma once

#ifndef ARRAYS_SORTIGNS
#define ARRAYS_SORTIGNS

#include "arrays/base/helpers.hpp"

V::const_iterator binary_search(const V& v, int key);
V::const_iterator linear_search(const V& v, int key);

#endif