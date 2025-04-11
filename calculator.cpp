#include "calculator.h"
#include <stdexcept>

int Calculator::add(int a, int b) {
    // TODO
    if (a >= INT_MAX || b >= INT_MAX)
    {
        throw std::overflow_error("overflow error");
    }
    else if (a <= INT_MIN || b <= INT_MIN)
    {
        throw std::overflow_error("overflow error");
    }
    else
    {
        return a+b;
    }
}

int Calculator::sub(int a, int b) {
    // TODO
    if (a >= INT_MAX || b >= INT_MAX)
    {
        throw std::overflow_error("overflow error");
    }
    else if (a <= INT_MIN || b <= INT_MIN)
    {
        throw std::overflow_error("overflow error");
    }
    else
    {
        return a-b;
    }
}

int Calculator::mul(int a, int b) {
    // TODO
    if (b != 0)
    {
        if (a >= INT_MAX / b || b >= INT_MAX)
        {
            throw std::overflow_error("overflow error");
        }
        else if (a <= INT_MIN / b || b <= INT_MIN)
        {
            throw std::overflow_error("overflow error");
        }
        else
        {
            return a*b;
        }
    }
    return 0;
}

int Calculator::div(int a, int b) {
    // TODO
    if (b == 0)
    {
        throw std::invalid_argument("Division by zero");
    }
    else if (a >= INT_MAX || b >= INT_MAX)
    {
        throw std::overflow_error("overflow error");
    }
    else if (a <= INT_MIN || b <= INT_MIN)
    {
        throw std::overflow_error("overflow error");
    }
    else
    {
        return a/b;
    }
}