#include<iostream>
#include<string>
#include<Windows.h>
#include "Myclass1.h"

class Employee {

private:
    
    int salary;

public:
   
    void setSalary(int s) {

        salary = s;
    }
    
    int getSalary() {

        return salary;
    }
};

int main() {

    Employee myObj;

    myObj.setSalary(1000);

    std::cout << myObj.getSalary();

    return 0;
}

