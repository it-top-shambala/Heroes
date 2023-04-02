#pragma once

#include <string>

using namespace std;

class Hero {
private:
    string _name;

protected:
    int health;
    int damage;

    Hero(string name) {
        _name = name;
    }

public:
    int GetHealth() {
        return health;
    }
    void SetHealth(int damage) {
        health -= damage;
    }

    int GetDamage() {
        return damage;
    }

    bool IsDead() {
        return health <= 0;
    }

    void Attack(Hero* enemy) {
        enemy->SetHealth(damage);
    }

    string GetName() {
        return _name;
    }
};
