#include <iostream>
using namespace std;

int main()
{
	int n=1;
	
	switch (n)
	{
	case 1:
		cout<<++n;
//n cộng thêm 1 đơn vị
//nếu n++ thì vẫn in ra n=1 
	case 2:
		cout << n;
// in ra thêm 1 giá trị giống case 1
// n++ thì n này sẽ tăng thêm 1 đơn vị
	case 3:
		cout << n;
		break;
	default:
		cout << "k co gi";
	}

	return 0;
}












