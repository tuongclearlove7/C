#include<iostream>
using namespace std;
int main()
{
    int n;
    long s;
    s = 0;
    cout << "nhap so n : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        s = s + i;
    }
    cout << "Tong 1 + 2 +... + " << n << " la : " << s;
}






