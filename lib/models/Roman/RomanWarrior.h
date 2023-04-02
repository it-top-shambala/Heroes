#pragma once

#include "Roman.h"
#include "../IWarrior.h"

class RomanWarrior : public Roman, public IWarrior {
public:
    RomanWarrior(string name) : Roman(name) {}
};

