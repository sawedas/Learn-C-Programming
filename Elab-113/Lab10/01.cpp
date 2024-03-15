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

    unsigned int getLevel(){
        return level;
    }

};

int main(){

}