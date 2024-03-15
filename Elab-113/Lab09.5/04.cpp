#include <iostream>
using namespace std;

struct Word {
    string word;
    int count;
};

int main() {
    Word data[20];
    int last_word = 0;

    while (true) {
        string input;
        cin >> input;

        if (input == "exit") {
            break;
        }


        bool found = false;
        for (int i = 0; i < last_word; ++i) {
            if (data[i].word == input) {
                found = true;
                ++data[i].count;
                break;
            }
        }

        if (!found) {
            data[last_word].word = input;
            data[last_word].count = 1;
            ++last_word;
        }
    }

    cout << "Output:" << endl;

    for (int i = 0; i < last_word; ++i) {
        cout << data[i].word << " = " << data[i].count << endl;
    }

    return 0;
}
