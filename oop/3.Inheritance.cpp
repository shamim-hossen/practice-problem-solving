#include<bits/stdc++.h>
using namespace std;
    /*=======Inheritance======
    1.Access modifiers
    2.Types of inheritance
        1.single 
        2.multilevel
        3.multiple
        4.Heirarchical
        5.Hybrid
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