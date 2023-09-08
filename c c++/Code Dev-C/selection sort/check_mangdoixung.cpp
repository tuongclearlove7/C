#include<bits/stdc++.h>

bool isPalindrome(int arr[], int n)
{
    for (int i = 0; i < n/2; i++) {
        if (arr[i] != arr[n-i-1]) {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = {1, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isPalindrome(arr, n)) {
        std::cout << "Mang doi xung";
    } else {
        std::cout << "Mang khong doi xung";
    }

    return 0;
}
  

     
