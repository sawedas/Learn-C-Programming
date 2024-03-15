#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(){
    char buffer[100];
    char name[15];
    double salary = 0.00, price = 0, total_money = 0;

    cin >> name;
    cin >> salary;
    salary *= 12;
    total_money += salary;

    for (int i = 0; i < 12; i++){
        cin >> price;
        total_money += (price * 15) / 100.0;
    }

    sprintf(buffer, "%s %.2lf\n", name, total_money);
    cout << buffer;
}