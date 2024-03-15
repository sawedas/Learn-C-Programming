#include <iostream>
using namespace std;

class GameCharacter {
public:    
    virtual void fight() {
        cout << "Fight!" << endl;
    }
};

class Enemy : public GameCharacter {
public:
    virtual void fight() {
        cout << "Enemy "; 
        GameCharacter::fight();
    }
};

class Boss : public Enemy {
public:
    virtual void fight() {
    cout << "Bossy ";
    Enemy::fight();
    }
};

int main() {
    
    GameCharacter *game = new GameCharacter();
    GameCharacter *enemy = new Enemy();
    GameCharacter *boss = new Boss();

    GameCharacter *characters[3] = { game, enemy, boss};

    for (int i = 0; i < 3; i++) {
        characters[i]->fight();
    }
}