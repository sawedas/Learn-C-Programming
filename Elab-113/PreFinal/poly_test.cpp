#include <iostream>
using namespace std;

class Animal {
private:
    string name;
public:
    Animal(string name) {
        this->name = name;
    }

    string getName() {
        return name;
    }

    void setName(string name) {
        this->name = name;
    }

    virtual void makeSound() = 0;
};

class Dog : public Animal {
public:
    Dog(string name) : Animal(name) {}

    void makeSound() {
        cout << "Hong Hong" << endl;
    }
};

class Cat : public Animal {
public:
    Cat(string name) : Animal(name) {}

    void makeSound() {
        cout << "Meow Meow" << endl;
    }
};

int main() {
    Animal *dog = new Dog("A");
    Animal *cat = new Cat("B");

    dog->makeSound();
    cat->makeSound();
}