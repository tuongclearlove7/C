#include <iostream>
using namespace std;

// Base class
class Mystr {
public:
    void Mystring() {
        cout << "Some content in parent class.\n";
    }
};

// Another base class
class MyIntClass {
public:
    int I = 10;
};
class MyFlClass {
public:
    float F = 2.5;
};
class Total {
public:
    float T;
};
// Derived class
class Myclass : public Mystr, public MyIntClass, public MyFlClass,public Total {
};

int main() {
    Myclass myObj;

    cout << "string is : "; myObj.Mystring();
    cout <<"number integer is : " << myObj.I << endl;
    cout <<"number float is : " << myObj.F<<endl;
    cout << "total I + T = ";
    myObj.T = myObj.I + myObj.F;
    cout << myObj.T;

    return 0;
}




