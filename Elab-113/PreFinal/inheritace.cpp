#include <iostream>
using namespace std;

class Animal {

private:
	string name;
	int age;

public:
	Animal(string n, int a) : name(n), age(a) {}

    string getName() { return name; }
    int getAge() { return age; }

    void eat(string food) {
        cout << name << " is eating " << food << endl;
    }

    void sleep() {
        cout << name << " is sleeping..." << endl;
    }

    virtual void makeSound() {
        cout << name << " is making a sound" << endl;
    }
};

class Dog: public Animal {
public:
    Dog(string n, int a) : Animal(n, a) {}
		
		// redefine
    void makeSound() {
        cout << getName() << " is woofing" << endl;
    }
};

class Cat: public Animal {
public:
    Cat(string n, int a) : Animal(n, a) {}
		
		// redefine
    void makeSound() override {
        cout << getName() << " is woofing" << endl;
    }
};

int main() {
    Dog dobby("Dobby", 2);
    Cat bobby("Bobby", 4);

    dobby.eat("meat");
    dobby.makeSound();
    dobby.sleep();

    bobby.eat("fish");
    bobby.makeSound();
    bobby.sleep();
    return 0;
}