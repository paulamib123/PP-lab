#include <iostream>
using namespace std;

class Polygon {
    public:
        float width;
        float height;

        void get_values() {
            cout << "\nEnter Width: ";
            cin >> width;
            cout << "\nEnter Height: ";
            cin >> height;
        }

        virtual float area() {
            return 0;
        }
};

class Triangle: public Polygon {
    public:
        float area() {
            return 0.5 * width * height;
        }
};

class Rectangle: public Polygon {
    public:
        float area() {
            return width * height;
        }
};

int main() {
    Triangle t;
    Rectangle r;

    Polygon *poly = &t;
    cout << "\n Enter Values for Triangle";
    poly->get_values();
    cout << "\n Area of Triangle is: " << poly->area();
    cout << endl;

    poly = &r;
    cout << "\n Enter Values for Rectangle";
    poly->get_values();
    cout << "\n Area of Rectangle is: " << poly->area();
    cout << endl;

    return 0;
}