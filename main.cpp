#include <iostream>

#include "lib/models/Persian/PersianMagician.h"
#include "lib/models/Persian/PersianWarrior.h"
#include "lib/models/Roman/RomanMagician.h"
#include "lib/models/Roman/RomanWarrior.h"

#include "lib/helpers/ConsoleHelper.h"

int main() {
    Hero* hero = nullptr;
    Hero* enemy = nullptr;

    hero = new PersianMagician("persian");
    enemy = new RomanWarrior("roman");

    ConsoleHelper::ShowHeroInfo(hero);
    ConsoleHelper::ShowHeroInfo(enemy);

    hero->Attack(enemy);
    enemy->Attack(hero);

    ConsoleHelper::ShowHeroInfo(hero);
    ConsoleHelper::ShowHeroInfo(enemy);

    IMagician* temp = new PersianMagician("");
    temp->MagicAttack(hero);
    ConsoleHelper::ShowHeroInfo(hero);

    return 0;
}
