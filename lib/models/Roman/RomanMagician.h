#pragma once

#include "Roman.h"
#include "../IMagician.h"

class RomanMagician : public Roman, public IMagician {
public:
    void MagicAttack(Hero *enemy) override {
        enemy->Attack(enemy);
    }

    RomanMagician(string name) : Roman(name) {}
};