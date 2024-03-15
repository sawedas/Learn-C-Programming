#include <iostream>
using namespace std;

int main(){
    int amount = 0, most = 0;
    int prison[1000] = {0};
    cin >> amount;

    for (int i = 0; i < amount; i++){
        int prisoner;
        cin >> prisoner;
        prison[prisoner] = 1;
        if (prisoner > most){
            most = prisoner;
        }
    }
    prison[most + 1] = '\0';

    for (int i = 1; i <= most; i++){
        if (i % 2 == 1 && prison[i] == 0){
            cout << i << " ";
        }
    }
    cout << "\n";
    
    for (int i = 1; i <= most; i++){
        if (i % 2 == 0 && prison[i] == 0){
            cout << i << " ";
        }
    }
}