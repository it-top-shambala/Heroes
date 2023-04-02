#pragma once

#include "Persian.h"
#include "../IMagician.h"

class PersianMagician : public Persian, public IMagician {
public:
    void MagicAttack(Hero *enemy) override {
        enemy->Attack(enemy);
    }

    PersianMagician(string name) : Persian(name) {}
};


