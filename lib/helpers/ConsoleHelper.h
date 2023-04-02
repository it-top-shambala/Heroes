#pragma once

#include <iostream>

#include "../models/Hero.h"

using namespace std;

class ConsoleHelper {
public:
    static void ShowHeroInfo(Hero* hero) {
        cout << "== " << hero->GetName() << " ==" << endl;
        cout << "= HEALTH -> " << hero->GetHealth() << " =" << endl;
        cout << "= DAMAGE -> " << hero->GetDamage() << " =" << endl;
        cout << "=== === ===" << endl;
    }
};