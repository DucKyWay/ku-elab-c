#ifndef WEAPON_H
#define WEAPON_H

#include "Weapon.h"
#include "Material.h"

#include <iostream>
#include <vector>
using namespace std;

class Weapon {
private:
    int durability;
    int damage;
    string weaponType;

public:
    Weapon(int durability, int damage, string weaponType);
    int getDurability();
    int getDamage();
    string getWeaponType();
    int attack();
    bool upgrade(Material material);
    void repair();
    void showStatus();
};

#endif