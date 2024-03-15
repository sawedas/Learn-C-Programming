#include <iostream>
using namespace std;

class Pet {
    private:
        string name;
        int age;
        string type;

    public:
        Pet(string name, int age, string type) 
};

class Person {
    private:
        string name;
        int age;
        Pet *pet;
    
    public:
        Person(string name, int age, Pet *pet) : name(name), age(age), pet(pet) {}

    Pet getPet() {
        return pet;
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }
};


int main() {
    Pet sany("Sany", 1, "Dog");
    Person john("John", 20, sany);

    cout << john.getPet()->getName() << endl;
    return 0;
}