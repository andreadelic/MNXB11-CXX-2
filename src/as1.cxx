#include "as1.hpp"
#include <memory>

namespace homework {

// task 1.1
void swap_ptr(int* a, int* b, int *c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

// task 1.2
UniqueData::UniqueData(int value) {
    data_ = std::make_unique<int>(value);
}

int UniqueData::get() const {
    return *data_;
}

void UniqueData::set(int value) {
    *data_ = value;
}

}; // namespace homework
