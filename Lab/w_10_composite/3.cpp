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


int main()
{
   // สร้าง Object เพื่อทดสอบด้วยตัวเอง
}