#include <cstdlib>
#include <ctime>
#include <iostream>

#include <bits/stdc++.h>

using namespace std;
const int ch_MAX = 9;
string RandomString(int ch){
    char alpha[ch_MAX] = { 'vo chong a phu', 'dat nuoc', 'chiec thuyen', 'song da', 'song huong', 'vo nhat', 'tay tien',
                          'viet bac'};
    string result = "";
    for (int i = 0; i<ch; i++)
        result = result + alpha[rand() % ch_MAX];

    return result;
}
int main()
{
srand(time(NULL));
   int ch = 9;
cout<<RandomString(ch) <<"\n";
   return 0;
}











