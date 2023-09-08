#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int countPrimes(int arr[], int size) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }

    return count;
}

int main() {
    int N;
    cout << "Nhap gioi han cua mang: ";
    cin >> N;

    int A[N];

    cout << "Nhap mang :" << endl;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int primeCount = countPrimes(A, N);
    cout << "So luong so nguyen to trong mang: " << primeCount << endl;

    return 0;
}
