#include<bits/stdc++.h>
using namespace std;
/*=====Encapsulation=======
1.information/data hiding;ex=>private variable and fuction
2.wrapping variable and method
    encapsualtion=private variable,public method//security
    class{
        data member(variable) + methods(function/behavior)
    }
*/

class Student {
private:
    string name;// Encapsulated attribute
    int age;// Encapsulated private attribute

public:
    Student(string n,int a) {
        name = n;
        age = a;
    }
    int getAge(){
        return age;// Encapsulated method to access private attribute
    }
};

int main(){
    Student student("Alice", 20);
    //cout<<"Student: "<<student.name<<endl;// Error: private attribute
    cout<<"Age: "<<student.getAge()<<endl;
    return 0;
}


/*======Encapsulation========
#include<iostream>
using namespace std;

class KG{
    private: int p;//encapsulation
    private: int q;//encapsulation
    
    public: void setP(int input){ //abstruction
        p= input;
        q= p/2;
    }
};

int main()
{
    KG obj;
    obj.setP(6);
    return 0;
}

*/