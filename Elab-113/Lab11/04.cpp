#include <iostream>
using namespace std;

class Animal
{
protected:
    int happiness;
    int energy;
    int fullness;
    const int MAX_HAPPINESS = 100;
    const int MAX_ENERGY = 100;
    const int MAX_FULLNESS = 100;
    void limitStat();
public:
    Animal(int, int, int);
    int getHappiness();
    int getEnergy();
    int getFullness();
    void eat(int);
    void play(int);
    void sleep(int);
};

class Bird : public Animal {
public:
    Bird(int, int, int);
    void fly(int);
    void sing();
};

Animal::Animal(int happiness, int energy, int fullness) {
    this->happiness = happiness;
    this->energy = energy;
    this->fullness = fullness;
    limitStat();
}

void Animal::limitStat() {
    if (happiness < 0) {
        happiness = 0;
    }if (happiness > MAX_HAPPINESS) {
        happiness = 100;
    }if (energy < 0) {
        energy = 0;
    }if (energy > MAX_HAPPINESS) {
        energy = 100;
    }if (fullness < 0) {
        fullness = 0;
    }if (fullness > MAX_FULLNESS) {
        fullness = 100;
    }
}

int Animal::getHappiness() {
    return happiness;
}

int Animal::getEnergy() {
    return energy;
}

int Animal::getFullness() {
    return fullness;
}

void Animal::eat(int food) {
    if (food > 0) {
        fullness += food;
        if (fullness > 100) {
            happiness -= 10;
        }
        limitStat();
    }
}
    

void Animal::play(int hour) {
    if (hour > 0) {
        if (energy != 0 && fullness != 0) {
            for (int i = 0; i < hour; i++) {
                energy -= 10;
                fullness -= 20;
                happiness += 5;
            }
        }
        limitStat();
    }
}

void Animal::sleep(int hour) {
    if (hour > 0){
        for (int i = 0; i < hour; i++) {
            energy += 10;
            fullness -= 10;
        }
        limitStat();
    }
}

Bird::Bird(int happiness, int energy, int fullness)
    : Animal(happiness, energy, fullness) {
}

void Bird::fly(int hour) {
    if (hour > 0) {
        energy -= hour * 5;
        limitStat();
    }
}

void Bird::sing() {
    happiness += 5;
    limitStat();
}