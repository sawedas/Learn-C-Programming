#include <iostream>
using namespace std;

class Transportation {
public:
    virtual double fare() = 0;
};

class Taxi : public Transportation {
private:
    double distance;
public:
    void setDistance(double distance) {
        this->distance = distance;
    }
    
    double fare() {
        return 35 + (2.0 * distance);
    }
};

class BmtaBus : public Transportation {
public:
    double fare() {
        return 6.5;
    }
};

class BTS : public Transportation {
private:
    int station;
public:
    void setStation(int station) {
        this->station = station;
    }

    double fare() {
        return 15 + (station * 5);
    }
};

class Passenger {
private:
    double totalfare;
public:
    Passenger() {
        totalfare = 0;
    }
    void addTransportation(Transportation &type) {
        totalfare += type.fare();
    }

    double getTotalFare() {
        return totalfare;
    }
};

int main()
{
    Passenger passenger;
    while(1) {
        char transportType;
        cin >> transportType;
        if (transportType == 'A') {
            Taxi *taxi = new Taxi();
            double distance;
            cin >> distance;
            taxi->setDistance(distance);
            passenger.addTransportation(*taxi);

        } else if (transportType == 'B') {
            BmtaBus *bus = new BmtaBus();
            passenger.addTransportation(*bus);

        } else if (transportType == 'C') {
            BTS *bts = new BTS();
            int station;
            cin >> station;
            bts->setStation(station);
            passenger.addTransportation(*bts);
            

        } else {
            break;
        }
    }
    cout << "Total Fare: " << passenger.getTotalFare() << endl;
}