// kiểu dữ liệu  số nguyên và số chấm động

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    //double a;
    //a = 9.1234567;
    //cout << a,"\n";
    //cout << std::setprecision(20);
    /*khi ta cho std::setprecision(20); thì thì xuất ra  độ chính xác trong
    20 ký tự trong dãy số nếu có */ 
    //float f{ 9.23456765432f };
    //cout << f,"\n";
    //double d{ 9.7777777777777777777 };
    //cout << d;
    double d1{
        1.0
    };
    double d2{ 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1};
    cout << std::setprecision(20);
    cout << d1;
    cout << d2;
}


























