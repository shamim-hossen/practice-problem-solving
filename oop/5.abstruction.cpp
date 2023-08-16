#include<bits/stdc++.h>
using namespace std;
/*========Abstruction===========
1.implementation hiding;
    example=>email sending
*/
class Animal {
public:
    virtual void makeSound() = 0;  // Pure virtual function (abstraction)
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat meows" << endl;
    }
};

int main(){
    
    Dog dog;
    Cat cat;

    Animal* animal1 = &dog;
    Animal* animal2 = &cat;

    animal1->makeSound();  // Abstraction in action
    animal2->makeSound();




    return 0;
}