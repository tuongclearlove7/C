#include<bits/stdc++.h> 

std::string B[20];
int n = 7, k = 4;

void Print(int k) {
    for (int i = 1; i <= k; i++)
        std::cout << B[i] << "\t";
    std::cout << std::endl;
}

void LKTH(int n, int k, std::string arr[]) {
    for (int i = 1; i <= k; i++)
        B[i] = arr[i];

    Print(k);

    int c = 1;
    while (true) {
        int i = k;
        while (B[i] == arr[n - k + i])
            i--;
        
        if (i == 0)
            break;
        
        int pos = find(arr, arr + n + 1, B[i]) - arr;
        B[i] = arr[pos + 1];

        for (int j = i + 1; j <= k; j++)
            B[j] = arr[j];

        Print(k);
        c++;
    }
}

int main() {
    std::string b[8] = {" ", "dai", "dung", "hoa", "long", "thanh", "vy", "tuan"};

    LKTH(n, k, b);
    return 0;
}
