#include <iostream>
#include <string>
using namespace std;

class MusicPlaylist {
private:
    string music[21];
    int current_index = 1;
public:
    MusicPlaylist() {};

    void add(string name) {
        int i = 1;
        for (i = 1; music[i] != ""; i++) {}
        music[i] = name;
    }

    void setCurrentTrack(int number) {
        this->current_index = number;
    }

    string play() {
        return music[current_index];
    }
};

int main() {
    MusicPlaylist mp;
    mp.add("Shape of You");
    mp.add("That's What I Like");
    mp.add("Humble");
    mp.setCurrentTrack(1);
    cout << mp.play() << endl;
}