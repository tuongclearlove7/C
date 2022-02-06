/*câu điều kiện if else*/
// toán tử ! (phủ định)
#include <iostream>
using namespace std;
int main() {
	bool b1{ true };
	if (b1 == true)
		// điều kiện là b1 = true
		cout << "b1 is true \n";
	else
		cout << "b1 is false";

	bool b2{ false };
	// nếu false thì in ra đk else
	if (b2)
		cout << "my name is tuong";
	else
		cout << "clearlove7\n";

	bool b3{ true };
	if (!b3 == true)
	/*nếu cho toán tử phủ định ! vào !b2 thì sẽ phủ định
	lại true */
		cout << "b3 is true";
	else
		cout << "b3 is false\n";

	bool b5{ false };
	if (!b5)
	/*nếu cho toán tử phủ định ! vào !b2 thì sẽ phủ định
	lại true or false */
		cout << "my name is tuong";
	else
		cout << "clearlove7\n";
	return 0;
}