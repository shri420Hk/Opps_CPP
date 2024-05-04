#include<iostream>
using namespace std;
// Abstraction example: Circle class
class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double getArea() {
        return 3.14 * radius * radius;
    }
};

int main() {
    Circle myCircle(5.0);
    double area = myCircle.getArea();
    std::cout << "Area of the circle: " << area << std::endl;
    return 0;
}
