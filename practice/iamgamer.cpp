#include <iostream>
#include <cstdio>
using namespace std;

class Character {
    private:
        string name;
        float health;

    public:
        Character(string name) {
            this->name = name;
            this->health = 100;
        }
   
        string getName() {
            return this->name;
        }
        float getHealth() {
            return this->health;
        }
        void setHealth(float hp) {
            this->health = (hp < 0) ? 0 : ((hp > 100) ? 100 : hp);
        }
        virtual void attack(Character& character) = 0;
        virtual string getClass() = 0;
};
class Warrior : public Character {
    public:
        Warrior(string name) : Character(name) {}
        
        void attack(Character& character) override {
            float damage = this->getHealth() * 0.8;
            character.setHealth(character.getHealth() - damage);
            printf("%s [HP=%.2f] swings a sword to %s [HP=%.2f]!", this->getName(), this->getHealth(), character.getName(), character.getHealth());
        }
        string getClass() override {
            return "Warrior";
        }
};
class Mage : public Character {
    public: 
        Mage(string name) : Character(name) {}

        void attack(Character& character) override {
            float damage = this->getHealth() * 0.55;
            character.setHealth(character.getHealth() - damage);
            printf("%s [HP=%.2f] casts a fireball to %s [HP=%.2f]!", this->getName(), this->getHealth(), character.getName(), character.getHealth());
        }
        string getClass() override {
            return "Mage";
        }
};
class Archer : public Character {
    public: 
        Archer(string name) : Character(name) {}

        void attack(Character& character) override {
            float damage = this->getHealth() * 0.85;
            character.setHealth(character.getHealth() - damage);
            printf("%s [HP=%.2f] shoots an arrow to %s [HP=%.2f]!", this->getName(), this->getHealth(), character.getName(), character.getHealth());
        }   
        string getClass() override {
            return "Archer";
        }
};

int main() {
    cout << kuy.getClass() << endl;
}