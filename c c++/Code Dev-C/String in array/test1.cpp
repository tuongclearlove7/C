#include<bits/stdc++.h>
using namespace std;
int do_dai(char a[]){
    int i=1;
    while(true){
        if(a[i]=='\0'){
            return i;
        }
        i++;
    }
}
bool check (char a[]){
    int n=do_dai(a);
    for(int i=0;i<n;i++){
        if(a[0]!='F'){
            return false;
        }else if(a[i+1]!='F'||a[i]!='D'){
            return false;
        }else{
            for(int j=2;j<n;j++){
                if(a[i]==a[j]&&a[i]==a[j+1]){
                    return false;
                }
            }
        }
    }
    return true;
}

int main(){
    char a[100];
    cin.getline(a,100);
    bool k=check(a);
    cout<<k;


    return 0;
}
