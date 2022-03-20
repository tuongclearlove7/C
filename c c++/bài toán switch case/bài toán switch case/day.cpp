#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Thang: ";
    cin >> x;
    switch (x) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "Thang " << x << " co 31 ngay";
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "Thang " << x << " co 30 ngay";
        break;
    case 2:
        cout << "nhap nam: "; cin >> y;
        if ((y % 100 != 0 && y % 4 == 0) || y % 400 == 0) cout << "thang " << x << " co 29 ngay";
        else cout << "thang " << x << " co 28 ngay";
        break;
    default:
        cout << "khong ton tai thang";
    }
    return 0;
}





