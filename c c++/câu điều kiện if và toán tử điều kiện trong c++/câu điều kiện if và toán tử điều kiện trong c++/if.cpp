/*câu điều kiện trong c++ */
#include <iostream>
#include<string>
using namespace std;
int main() {
// câu điều kiện nhập vào đúng thì true sai thì false
	const string USERNAME("tuongclearlove7");
	const string PASSWORD("tuong");
	string username = "Enter username: ";
	string password = "Enter password: ";
	cout << username;
	getline(cin, username);
	cout << password;
	getline(cin, password);
	if ((username == USERNAME) && (password == PASSWORD)) {
		cout << "Congratulations, you have entered the correct password!\n";
		cout << "True" << endl;
	}
	else {
		cout << "The password you entered is incorrect. Please re-enter!\n";
		cout << "false" << endl;
	}
	cout << "nhap so ban muon nhap : ";
	int n;
	cin >> n;
	if (n == 1) {
		cout << "this is one number" << endl;
	}
	else if (n == 2) {
		cout << "this is two number" << endl;
	}
	else if (n == 3) {
		cout << "this is three  number" << endl;
	}
	else {
		cout << "enter number false";
	}
	//Toán tử điều kiện
	if (1 > 0) {
		cout << 1 << endl;
	}
	else {
		cout << 0 << endl;
	}
	(1 > 0) ? (cout << 1 << endl) : (cout << 0 << endl);

	cout << ((1 > 0) ? 1 : 0) << endl;;
	return 0;
}













































