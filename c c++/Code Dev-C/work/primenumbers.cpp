#include <stdbool.h>
#include <iostream>
#define n 100

using namespace std;

int main() {
	
    int primes[n] = {2,3};
    int i, p, primeIndex;

    primeIndex = 2;

    for (p = 5; p <= n; p = p + 2) {
        
        bool isPrime = true;
        
        for (i = 1; p / primes[i] >= primes[i]; ++i) {
        	
            if (p % primes[i] == 0) {
            	
                isPrime = false;
                
                break;
            }
        }
        
        if (isPrime) {
        	
            primes[primeIndex++] = p;
        }
    }

    for (i = 0; i < primeIndex; ++i){
    	
    	cout<<primes[i]<<" ";
	}
        
    return 0;
}











