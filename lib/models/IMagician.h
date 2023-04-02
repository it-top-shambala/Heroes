#pragma once

#include "Hero.h"

class IMagician {
public:
    virtual void MagicAttack(Hero* enemy) = 0;
};
