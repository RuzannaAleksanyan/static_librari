#include "../include /math.hpp"
#include <stdexcept>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int divide(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero");
    }
    return a / b;
}

int mul(int a, int b) {
    return a * b;
}