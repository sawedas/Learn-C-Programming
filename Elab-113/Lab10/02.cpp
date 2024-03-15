#include <iostream>
#include <string>
using namespace std;

class Hero {
private:
    string name;
    unsigned int level;
public:
    Hero(string name, unsigned int level) {
        this->name = name;
        this->level = level;
    }

    string getName() {
        return name;
    }

    unsigned int getLevel() {
        return level;
    }
};

int main() {
    string name_hero;
    unsigned int level_hero = 0;
    cin >> name_hero >> level_hero;
    Hero myhero = Hero(name_hero, level_hero);

    cout << myhero.getName() << " " << myhero.getLevel() << endl;
    return 0;
}