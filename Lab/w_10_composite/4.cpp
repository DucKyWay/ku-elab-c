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
    // @Overide
    Circle(point c, double r) {
        this->center = c;
        this->radius = r;
    }

    double area() {
        return M_PI * this->radius * this->radius;
    }
    double distanceFromCenter(point pt) {
        return sqrt(pow((pt.xPosition - center.xPosition), 2) +
                    pow((pt.yPosition - center.yPosition), 2));
    }
    bool contains(point pt) {
        return distanceFromCenter(pt) <= radius;
    }
};


int main() {

    double x, y, r;
    point check;
    cout << "Center of Circle: ";
    cin >> x >> y;
    cout << "Radius of Circle: ";
    cin >> r;
    cout << "Point to Check: ";
    cin >> check.xPosition >> check.yPosition;

    point center = {x, y};
    Circle circle(center, r);

    cout << "Area of Circle is " << circle.area() << endl;

    cout << "Distance from Center to Point (" 
    << check.xPosition << ", " << check.yPosition 
    << ") is " << circle.distanceFromCenter(check) << endl;

    if(circle.contains(check))  {cout << "This circle contains this point." << endl;}
    else                        {cout << "This point is not in this circle." << endl;}
    // สร้าง Object เพื่อทดสอบด้วยตัวเอง
    return 0;
}