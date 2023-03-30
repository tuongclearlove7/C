#include<bits/stdc++.h>

using namespace std;

#include <iostream>
using namespace std;

int knapSack(int W, int w[], int v[], int n) {
   int i, wt;
   int K[n + 1][W + 1];
   for (i = 0; i <= n; i++) {
      for (wt = 0; wt <= W; wt++) {
         if (i == 0 || wt == 0)
         K[i][wt] = 0;
         else if (w[i - 1] <= wt)
            K[i][wt] = max(v[i - 1] + K[i - 1][wt - w[i - 1]], K[i - 1][wt]);
         else
        K[i][wt] = K[i - 1][wt];
      }
   }
   
   
   
   return K[n][W];
}
int main() {
	
	ifstream input("input.txt");
	ofstream output("output.txt");
	
   
   int n, W;
   input >>n>>W;
   int v[n], w[n];
   for (int i = 0; i < n; i++)input >> v[i];
   for (int i = 0; i < n; i++)input >> w[i];
   
   output << knapSack(W, w, v, n);
   return 0;
}
























