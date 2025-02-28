#include <iostream>
#include <string>
using namespace std;

class Hero {
    public:
    // private:
    string name;
    int level;

    // public:
    Hero(string n, int l) {
        this->name = n;
        this->level = l;
    }

    string getName() const {
        return this->name;
    }

    int getLevel() const{
        return this->level;
    }

    // ~Hero() {
    //     cout << "Destuctor" << endl;
    // }
};

int main() {
   // สร้าง object เพื่อทดสอบด้วยตัวเอง
}