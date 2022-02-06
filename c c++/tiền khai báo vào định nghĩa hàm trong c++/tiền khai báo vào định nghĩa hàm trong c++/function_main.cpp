//tiền khai báo và định nghĩa hàm trong c++
/*Hàm main phải đc đặt dưới hàm tự khai báo ms chạy đc
chương trình*/
#include <iostream>
using namespace std;
void printValue(int x);
void printValue(int x);// có thể  khai báo hàm nhiều lần

int addValue(int x, int y);// tiền khai báo
int main(){
	extern int a;// có thể khai báo kiến nhiều lần
	extern int a;
	int n = 1;
	double d;
	printValue(addValue(6, 9));
	return 0;
}
void printValue(int x){
	cout << x << endl;
}
int addValue(int x, int y){
	return x + y;
}




















