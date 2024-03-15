#include <iostream>
using namespace std;

int main(){
    int number, count_reduce = 0;
    cin >> number;
    
    while (number != 0){
        if ((number % 2) == 0){
            number /= 2;
        }else if ((number % 2) != 0){
            number -= 1;
        }
        count_reduce += 1;
    }
    
    cout << count_reduce;
    return 0;
}