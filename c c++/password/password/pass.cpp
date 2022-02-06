#include <iostream>
#include <string>
using namespace std;
int main()
{
	const string USERNAME("tuongclearlove7");
	const string PASSWORD("tuong");
	string username;
	string password;
	cout << "Enter username: ";
	getline(cin, username);
	cout << "Enter password: ";
	getline(cin, password);
	// toán tử đk và && 
	if ((username == USERNAME) && (password == PASSWORD)) {
		cout << "Congratulations, you have entered the correct password!\n";
		cout << "True" << endl;
	}
	else {
		cout << "The password you entered is incorrect. Please re-enter!\n";
		cout << "false" << endl;
	}
	return 0;
}