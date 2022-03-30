#include <iostream>
#include<string>
using namespace std;

// Base class
class MystrClass {
public:
    void Mystring() {
        string my_str_ing;
        cout << "Input String : ";
        cin >> my_str_ing;
        cout << "String is : " + my_str_ing << endl;
    }
};

// Another base class
class MyIntClass {
public:
    int MyInt() {
        int I;
        cout << "Input Int : ";
        cin >> I;
        return I;
    }
};
class MyFlClass {
public:
    float MyFloat() {
        float F;
        cout << "Input Float : ";
        cin >> F;
        return F;
    }
};

// Derived class
class Myclass : public MystrClass, public MyIntClass, public MyFlClass {
};

int main() {
    Myclass myObj;
    myObj.Mystring();
    cout <<"number integer is : " << myObj.MyInt() << endl;
    cout <<"number float is : " << myObj.MyFloat();
    return 0;
}




