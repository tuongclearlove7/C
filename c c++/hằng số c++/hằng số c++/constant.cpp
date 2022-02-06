// hằng số (constant) const
#include<iostream>
using namespace std;
/*int main() {
	const double PI{3.14159};
	double const speed_of_sound{ 343.2 };
	cout << "PI = " << PI <<"\n";
	return 0;
}
	*/
const double PI{ 3.14159 };
void printPI() {
	cout << "PI = " << PI;

}
int main() {
	cout << "PI = " << PI<<endl;
	printPI();// gọi lại printPI
	return 0;
}
	












