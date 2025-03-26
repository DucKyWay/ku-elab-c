// inherit

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Bark" << endl;
    }
};

int main() {
    Dog d;
    d.speak(); // Output: Bark
}

// composite

#include <iostream>
using namespace std;

class Engine {
public:
    void start() {
        cout << "Engine started" << endl;
    }
};

class Car {
private:
    Engine engine;

public:
    void start() {
        engine.start();
    }
};

int main() {
    Car car;
    car.start(); // Output: Engine started
}

// polymorph

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Bark" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Meow" << endl;
    }
};

void makeItSpeak(Animal* animal) {
    animal->speak();  // Polymorphic call
}

int main() {
    Dog d;
    Cat c;

    makeItSpeak(&d); // Output: Bark
    makeItSpeak(&c); // Output: Meow
}
