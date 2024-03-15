#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

typedef struct _point {
    double xPosition;
    double yPosition;
} point;

class Circle {
private:
    point center;
    double radius;
public:
    Circle(point center, double radius) {
        this->center = center;
        this->radius = radius;
    }

    double area() {
        return M_PI * radius * radius;
    }

    double distanceFromCenter(point pt) {
        return sqrt(pow((center.xPosition - pt.xPosition) , 2) + pow((center.yPosition - pt.yPosition), 2));
    }

    int contains(point pt) {
        if (distanceFromCenter(pt) > radius) {
            return 0;
        }else {
            return 1;
        }
    }
};

int main() {
    point origin, check;
    double rad;
    cout << "Center of Circle: ";
    cin >> origin.xPosition >> origin.yPosition;
    cout << "Radius of Circle: ";
    cin >> rad;
    cout << "Point to Check: ";
    cin >> check.xPosition >> check.yPosition;
    Circle cir(origin, rad);
    cout << "Area of Circle is " << cir.area() << endl;
    cout << "Distance from Center to Point (" << check.xPosition << ", " << check.yPosition << ") is " << cir.distanceFromCenter(check) << endl;
    if (cir.contains(check) == 1){
        cout << "This circle contains this point." << endl;
    }
    else{
        cout << "This point is not in this circle." << endl;
    }
}