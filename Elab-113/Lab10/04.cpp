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
    point center_input, check;
    double radius;
    cout << "Center of Circle: ";
    cin >> center_input.xPosition >> center_input.yPosition;
    cout << "Radius of Circle: ";
    cin >> radius;
    cout << "Point to Check: ";
    Circle result(center_input, radius);

    cin >> check.xPosition >> check.yPosition;
    cout << "Area of Circle is " << result.area() << endl;
    cout << "Distance from Center to Point (" << check.xPosition << ", " << check.yPosition << ") is " << result.distanceFromCenter(check) << endl;

    if (result.contains(check)) {
        cout << "This circle contains this point.";
    }else {
        cout << "This point is not in this circle.";
    }
}