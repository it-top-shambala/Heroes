#pragma once

#include "../Hero.h"

using namespace std;

class Roman : public Hero {
private:
    const int HEALTH = 100;
    const int DAMAGE = 100;

protected:
    Roman(string name) : Hero(name) {
            health = HEALTH;
            damage = DAMAGE;
    }
};

