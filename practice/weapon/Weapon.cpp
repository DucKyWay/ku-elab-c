#include "Weapon.h"
#include "Material.h"

#include <iostream>
#include <vector>
using namespace std;

Weapon::Weapon(int durability, int damage, string weaponType)
{
    this->durability = durability;
    this->damage = damage;
    this->weaponType = string;
}

int Weapon::getDurability() {
    return durability;
}
int Weapon::getDamage() {
    return damage;
}
string Weapon::getWeaponType() {
    return weaponType;
}

int Weapon::attack() {
    if(durability == 0) 
        return 0;
    durability -= 2;
    if(durability < 0) durability = 0;
    return damage;
}
bool Weapon::upgrade(Material material) {
    if(material.isCompatibleWith(this->weaponType)) {
        damage += material.getUpgradeValue();
        return true;
    } 
    else return false;
}
void Weapon::repair() {
    durability = 100;
}
void Weapon::showStatus() {
    cout << durability << " " << damage << " " << weaponType;
}