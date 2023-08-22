#include<bits/stdc++.h>
using namespace std;
    /*=========polymorphism========
    1.types of polymorphism
        1.compile time/static
            1.fuction overloading//same class=>signature different//static inheritance
                add(int a)
                add(double a,double b)
            2.operator overloading
        2.run time/dynamic===>>inheritance hote hobe
            1.method overriding//different class=>signature same//dynamic inheritance
                add(int a)
                add(int a)

        many forms=bohurup

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



/*=========Method Overloading============
#include <iostream>
using namespace std;

class KG
{
	public:
	
	void func(int x)
	{cout << "value of x is " << x << endl;}
	
	void func(double x)
	{cout << "value of x is " << x << endl;}
	
	void func(int x, int y)
	{cout << "value of x and y is " << x << ", " << y << endl;}
};

int main() 
{
	KG obj1;
	obj1.func(7);
	obj1.func(9.132);
	obj1.func(85,64);
	return 0;
}

===============Method Overriding==============
#include<iostream>
using namespace std;

class base
{
public:
	virtual void print ()
	{ cout<< "print base class" <<endl; }

	void show ()
	{ cout<< "show base class" <<endl; }
};

class derived:public base
{
public:
	void print () 
	{ cout<< "print derived class" <<endl; }
};

int main()
{
	base *bptr;
	derived d;
	bptr = &d;
	bptr->print();
	bptr->show();
	return 0;
}

*/