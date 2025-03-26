#ifndef MATERIAL_H
#define MATERIAL_H

#include <iostream>
#include <vector>
using namespace std;

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

#endif