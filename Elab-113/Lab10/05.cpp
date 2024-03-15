#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

class Time {
private:
    int hour;
    int minute;
    int second;

public:
    Time(int hour, int minute, int second) {
        if (hour < 24) {
           this->hour = hour; 
        }else {
            this->hour = hour - 24;
        }
        this->minute = minute;
        this->second = second;
    }

    Time(int duration) {
        hour = duration / 3600;
        minute = (duration % 3600) / 60;
        second = duration % 60;
    }

    int getHour() {
        return hour;
    }
    int getMinute() {
        return minute;
    }
    int getSecond() {
        return second;
    }

    void setHour(int hour) { 
        this->hour = hour; 
    }void setMinute(int minute) { 
        this->minute = minute; 
    }void setSecond(int second) { 
        this->second = second;
    }


    int getDuration() {
        return hour * 3600 + minute * 60 + second;
    }

    Time add(Time other) {
        int totalSecond = getDuration() + other.getDuration();
        return Time(totalSecond);
    }

    int subtract(Time other) {
        int sub = getDuration() - other.getDuration();

        if (sub < 0) {
            return 86400 + sub;
        }else {
            return sub;
        }
    }
    
    int equals(Time other) {
        return (hour == other.getHour() && minute == other.getMinute() && second == other.getSecond());
    }

    string toString() {
        stringstream ss;
        ss << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second;
        return ss.str();
    }
};

int main() {
    cout << "Example of subtract the time :";
    cout << "( a ) -> ";

}