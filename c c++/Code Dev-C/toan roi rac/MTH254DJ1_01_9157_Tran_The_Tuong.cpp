#include<bits/stdc++.h> 
void lkhv(std::string b[], int n) {
 
    while(next_permutation(b, b + n)){
    	for (int i = 0; i < n; i++) {
            std::cout << b[i] << " ";
        }
        std::cout << std::endl;
	}
}

int main() {
    std::string b[5] = {"xoai", "cam", "quit", "oi", "khe"};
    int n = 5;
    lkhv(b, n);

    return 0;
}
