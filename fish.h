#pragma once
#include "ani.h"
class fish : public animal {
public:
    fish() {
        std::cout << "Fish constructor\n";
    }
    void swim() { std::cout << "I swim\n"; }
};