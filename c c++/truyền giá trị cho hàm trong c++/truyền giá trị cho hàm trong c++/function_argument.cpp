/*đối số Tham số của hàm (function argument parameter)*/
#include <iostream>
using namespace std;
void hi(){
	cout << "Hello world!" << endl;
}
void printValue(int x){
	cout << x << endl;
	//x = 69;
}
int add(int x, int y){
	return x + y;//cộng 2 giá trị
}
int main(){
	hi();
	printValue(69);
//truyền hằng số vào tham số trong hàm printValue(69)
	cout << add(6, 9) << endl;
/*truyền 2 giá trị là 6 và 9 vào x và y trên hàm add rồi
công 2 giá trị lại */
	int a(1);// khởi tạo biến a vs giá trị là 1
	printValue(a+1);//có thể truyền vào 1 biểu thức là a+1 
// giá trị của biến a đc truyền vào printValue
	cout << a;
	return 0;
}

































