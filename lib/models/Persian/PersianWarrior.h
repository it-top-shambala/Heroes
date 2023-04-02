#pragma once

#include "Persian.h"
#include "../IWarrior.h"

class PersianWarrior : public Persian, public IWarrior {
public:
    PersianWarrior(string name) : Persian(name) {}
};
