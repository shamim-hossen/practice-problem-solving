#include<bits/stdc++.h>
using namespace std;

class Hero{

/*========Access modifier===========
videoLink= https://youtu.be/OQ0En1dQ3zI
public => accessible from anywhere
private =>only accessible within the class where it's declared
protected => accessible within the class and its subclasses



*/

    private:
    int health;
    public:
    char level;

    void print(){
        cout<<level<<endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }



};

int main(){
/*=======explorer more========
    EMPTY CLASS SIZE 1
    Hero h1;
    cout<<"size : "<<sizeof(h1) <<endl;

    Class
    object
    access modifier(public,private,protected)
    static allowcation 
    dynamic allowcation
    
    Constructor
    destructor
    default constructor
    parameterized constructor
    copy constructor
    copy assignment
    pass by value 
    pass by reference ✔
    deep copy =copy duplicate obj=(custom constructor)
    shallow copy=copy reference=(default conostructor)

    ====HW=======
    padding 
    greedy alignment
    const keyword->creating object
    const function 
    intialized list
    static keyword=belongToClass=don't need obj to call
    static function=(access static member, no this )
    static initialize
    data member
    initialize=scope resulation
*/

/*
    // creating object
    Hero ramesh;
    //use getter
    cout<<"Ramesh health : "<<ramesh.getHealth()<<endl;
    //user setter
    ramesh.setHealth(70);
    // ramesh.health = 70;
    ramesh.level = 'A'; 
    
    cout<<"Health : "<<ramesh.getHealth()<<endl;
    cout<<"Level : "<<ramesh.level<<endl;
*/


/*
    //static allocation
    Hero a;
    // a.setLevel(80);
    // a.getHealth('B');
    cout << "Level is: "<<a.level<< endl;
    cout << "Health is: "<<a.getHealth()<<endl;

    //Dynamically
    Hero *b = new Hero;
    b->setLevel('A');
    b->setHealth(70);
    cout<<"Level is: "<<(*b).level<<endl;
    cout<<"Health is: "<<(*b).getHealth()<<endl;
    //alternative access ->

    cout<<"Level is: "<<b->level<<endl;
    cout<<"Health is: "<<b->getHealth()<<endl;
*/

    return 0;
}


/*
#include<iostream>
using namespace std;

class Student{          //class jo object produce kare
    string name;
    int age;
    bool gender;
};

int main()
{
    Student yash;       //object jo akhose dekha jatahe,any real world entity
    yash.name = "Yash"; 
    return 0;
}
*/