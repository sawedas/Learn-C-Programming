#include <iostream>
using namespace std;

class Super {
    public:
        virtual void print() = 0;
};

class Sub : public Super {
    public:
        void print() {
            cout << "Sub" << endl;
        }
        void foo() {
            
        }
};

int main() {
    Sub *s = new Sub();
    s->print();  
    return 0;
}