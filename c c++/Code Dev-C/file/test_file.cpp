#include<iostream>
using namespace std;
void input(int arr[], int &n)
{
	cout << "Nhap so luong phan tu n : ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}


void output(int arr[], int n)
{

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
}
int main()
{
	int arr[1000];
	int n;
	input(arr,n);
	cout<<"____________\n";
	output(arr,n);
}









