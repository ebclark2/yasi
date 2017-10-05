#include "tuple.hpp"

namespace yasi {

void tuple::set_value(std::string new_value) {
    this->value = std::move(new_value);
}

std::string const& tuple::get_value() const {
    return this->value;
}

}
