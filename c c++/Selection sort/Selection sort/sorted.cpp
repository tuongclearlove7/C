#include <iostream>
#define zero_Player 0 

using namespace std;

int sort(int arr[]) {

	int temp;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (arr[i]>arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		cout << arr[i];
	}

}


int main() {

	int arr[5] = {3,4,1,8,9};
	sort(arr);
}