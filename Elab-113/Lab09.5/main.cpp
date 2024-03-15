#include <iostream>
#include <cmath> //include แบบ c
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    //double area = M_PI * 10 * 10;
    //namespace std;
    //cout : console output
    //output
    cout << "Hello C++";
    cout << std::endl; //endl : end line '\n'
    cout << 1234 << 'A' <<89.5; //ทำงานแยกไปที่ cout ไม่ได้ต่อกันแล้วไป
    cout << std::endl; //endl : end line '\n'

    //input
    string text;
    int number;
    cin >> number >> text;
    cout << "Number: "<< number << endl;
    cout << "Text: "<< text << endl;

    text = "Hello";
    text += " C++"; // in c use strcat()
    text = "abc";

    bool isEasy = true;
    cout << (text == "abc") << endl;

    for (int i = 0; i < text.size(); ++i) {
        
    }


    return 0;
}