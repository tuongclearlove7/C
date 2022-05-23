#include <iostream>
#include<conio.h>
//bài 3.13
int main() {
    int n;
    int count = 0;
    do {
        std::cout << "Nhap n( n >= 0 ): ";
        std::cin >> n;
    } while (n < 0);
    
    while (n != 0) {
        int temp = n % 10;
        if (temp % 2==0){
            count++;
        n /= 10;
       }
    }
    std::cout << "So luong cac chu so chan la: ";
    std::cout<<count;
    getch();
}
