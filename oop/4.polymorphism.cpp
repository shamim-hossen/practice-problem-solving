#include<bits/stdc++.h>
using namespace std;
    /*=========polymorphism========
    1.types of polymorphism
        1.compile time/static
            1.fuction overloading
            2.operator overloading
        2.run time/dynamic
            1.method overriding

    */


class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a square" << endl;
    }
};


int main(){
    Shape* shapes[2];
    Circle circle;
    Square square;

    shapes[0] = &circle;
    shapes[1] = &square;

    for (int i = 0; i < 2; ++i) {
        shapes[i]->draw();  // Polymorphic behavior
    }
    return 0;
}