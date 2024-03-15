#include <iostream>
using namespace std;

class Animal {
private:
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

int main() {
    string name;
    int food, energy, happiness;
    cout << "Enter your pet name: ";
    cin >> name;
    cout << "Enter amount food of your animal: ";
    cin >> food;
    cout << "Enter amount energy of your animal: ";
    cin >> energy;
    cout << "Enter amount happiness of your animal: ";
    cin >> happiness;

    Animal animal(happiness, energy, food);
    while (1) {
        int hour = 0;
        food = 0;

        cout << "Feed " << name << ": ";
        cin >> food;
        animal.eat(food);
        cout << "Play with " << name << " (hour): ";
        cin >> hour;
        animal.play(hour);
        cout << name << " want to sleep (hour): ";
        cin >> hour;
        animal.sleep(hour);

        cout << name << " have energy: " << animal.getEnergy() << endl;
        cout << name << " have food: " << animal.getFullness() << endl;
        cout << name << " have happiness: " << animal.getHappiness() << endl;

        string command;
        cout << "If u want to quit enter 'q': ";
        cin >> command;
        if (command == "q") {
            break;
        }
    }
    
}