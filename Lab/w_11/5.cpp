#include <iostream>
#include <vector>
using namespace std;

// class Material จากข้อก่อนหน้า
// class Weapon จากข้อก่อนหน้า
class Material {
    private:
        string name;
        int quality;
        vector<string> compatibleTypes;
    public:
        Material(string name, int quality);
        string getName();
        int getQuality();
        void addCompatibleType(string type);
        bool isCompatibleWith(string weaponType);
        int getUpgradeValue();
};

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

class Sword : public Weapon {
    private:
        double criticalMultiplier;

    public:
        Sword(int durability, int damage, double criticalMultiplier);
        double getCriticalMultiplier();
        void setCriticalMultiplier(double multiplier);
        int attack();
        void showStatus();
};

int main() {
    // เขียน main function เพื่อทดสอบเอง
    return 0;
}

Material::Material(string name, int quality) : name(name) {
    if(quality < 1)
        this->quality = 1;
    else if(quality > 5)
        this->quality = 5;
    else
        this->quality = quality;
};

string Material::getName(){
    return name;
}
int Material::getQuality(){
    return quality;
}

void Material::addCompatibleType(string type){
    compatibleTypes.push_back(type);
}
bool Material::isCompatibleWith(string weaponType){
    for (const string &type : compatibleTypes)
        if (type == weaponType) return true;
    return false;
}
int Material::getUpgradeValue(){
    return 5 * quality;
}

Weapon::Weapon(int durability, int damage, string weaponType) : weaponType(weaponType) {
    if(durability < 0)          
        this->durability = 0;
    else if(durability > 100)   
        this->durability = 100;
    else 
        this->durability = durability;

    if(damage < 0)              
        this->damage = 0;
    else    
        this->damage = damage;
};

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

Sword::Sword(int durability, int damage, double criticalMultiplier) 
    : Weapon(durability, damage, "Sword") {
    if(criticalMultiplier < 1) 
        this->criticalMultiplier = 1;
    else 
        this->criticalMultiplier = criticalMultiplier;
};

double Sword::getCriticalMultiplier() {
    return criticalMultiplier;
}
void Sword::setCriticalMultiplier(double multiplier){
    if (multiplier < 1)
        this->criticalMultiplier = 1;
    else 
        this->criticalMultiplier = multiplier;
}

int Sword::attack() {
    if (getDurability() == 0) 
        return 0;

    int total = getDamage() * criticalMultiplier;
    Weapon::attack(); // ลดเหมือนเดิมก็ไม่ต้องเขียนใหม่จ้าาาาา ป่าววะ
    return total;

}
void Sword::showStatus() {
    Weapon::showStatus();
    cout << " " << criticalMultiplier;
}