#include<bits/stdc++.h>
using namespace std;
    /*=======Inheritance======
    1.Access modifiers
    2.Types of inheritance
        1.single 
        2.multilevel
        3.multiple====Xjava//ambiguity
        4.Heirarchical===Xjava//
        5.Hybrid

    Inheritance=Common things write parrent class
    then can be addition feature in child class
    Student=={name,age,address,phone}
    Btech---->student
    Bsc------>student
    Mba------>student
    */

class Vehicle {
public:
    void start() {
        cout << "Vehicle starting..." << endl;
    }
};

class Car : public Vehicle {
public:
    void accelerate() {
        cout << "Car accelerating..." << endl;
    }
};


int main(){

    Car myCar;
    myCar.start();       // Inherited from Vehicle class
    myCar.accelerate();  // Specific to Car class

    return 0;
}

/*=========Inheritance============
#include <iostream>
using namespace std;

// Base class
class Parent
{
public:
	int p;
};

// Sub class inheriting from Base Class(Parent)
class Child : public Parent //class Child extends Parent
{
public:
	int c;
};

int main()
{
	Child obj1;
		
	// An object of class child has all data members
	// and member functions of class parent
	obj1.c = 7;
	obj1.p = 91;
	cout << "Child id is: " << obj1.c << '\n';
	cout << "Parent id is: " << obj1.p << '\n';
		
	return 0;
}

*/