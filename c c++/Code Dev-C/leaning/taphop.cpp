#include<bits/stdc++.h>

using namespace std;

int main() {
    // initialize sets A, B, and C
    set<int> A = {1, 2, 3};
    set<int> B = {2, 3, 4};
    set<int> C = {3, 4, 5};

    // calculate the union of A, B, and C and store the result in a new set
    set<int> union_set;
    set_union(A.begin(), A.end(), B.begin(), B.end(), inserter(union_set, union_set.begin()));
    set_union(union_set.begin(), union_set.end(), C.begin(), C.end(), inserter(union_set, union_set.begin()));
    
    set<int> result_set;
    set_intersection(union_set.begin(), union_set.end(), B.begin(), B.end(), inserter(result_set, result_set.begin()));
    int result = accumulate(result_set.begin(), result_set.end(), 1, multiplies<int>());

    cout << "The result is: " << result << endl;

    return 0;
}
    
    
    
    
    
    
    
    
    
    
