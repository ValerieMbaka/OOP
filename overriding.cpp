#include <iostream>

using namespace std;

class Polygon {
        protected:
                double length, width, area;

        public:
                Polygon();
                virtual void getArea() = 0;
                void getDimensions();
                void setDimensions();

};

class Rectangle : public Polygon {
        public:
                Rectangle();
                void getArea();
};

class Triangle : public Polygon {
        public:
                Triangle();
                void getArea();

};

Polygon::Polygon() {
        cout << "Enter the length: \n";
        cin >> length;
        cout << "Enter the width: \n";
        cin >> width;
}

Rectangle::Rectangle() {

}

void Rectangle::getArea() {
        cout << "\nGetting Area of the rectangle: \n";
        area = length * width;
        cout << "Area of the rectangle is: " << area << " square units" << endl;
}

void Polygon::getDimensions() {
        cout << "Getting Dimensions of the rectangle: \n";
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
}

void Polygon::setDimensions() {
        cout << "Enter the new length of the rectangle: \n";
        cin >> length;
        cout << "Enter the new width of the rectangle: \n";
        cin >> width;
}

Triangle::Triangle() {

}

void Triangle::getArea() {
        cout << "\nGetting Area of the triangle: \n";
        area = 0.5 * length * width;
        cout << "Area of the triangle is: " << area << " square units" << endl;
}

int main()
{
        cout << "Rectangle Object \n";
        Rectangle R1;
        cout << "\nTriangle Object \n";
        Triangle T1;
        R1.getArea();
        T1.getArea();
        return 0;
}