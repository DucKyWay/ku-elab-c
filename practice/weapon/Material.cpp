#include "Material.h"

#include <iostream>
#include <vector>
using namespace std;

Material::Material(string name, int quality) {
    this->name = name;
    this->quality = quality;
    
}

string Material::getName() {
    return name;
}
int Material::getQuality() {
    return quality;
}

string Material::addCompatibleType(string type) {
    compatibleTypes.push_back(type);
}
bool Material::isCompatibleWith(string weaponType) {
    for (string &type : compatibleTypes)
        if (type == weaponType) return true;
    return false;
}
int Material::getUpgradeValue() {
    return 5 * quality;
}