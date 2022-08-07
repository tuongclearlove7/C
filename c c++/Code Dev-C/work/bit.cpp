#include <bits/stdc++.h>
#define close(f) freopen(f".output","w",stdout)
#define open(f) freopen(f".input","r",stdin)
#define reset(x,val) memset((x),(val),sizeof(x))
#define bit(X,i) (((X)>>(i))&1)
#define pll pair<long long,long long>
#define pii pair<int,int>
#define ull unsigned long long
#define ll long long
#define maxn 50001
#define MOD 1000000007
#define INF 1000000007
#define base 311
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(),x.end()
#define sz(x) (int)(x).size()
#define PI 3.14
#define endl "\n"
 
using namespace std;
 
template<typename T>
T mul(T a, T b, T c){
    T res = (T)a*b;
    return (res>=c?res%c:res);
}
 
template<typename T>
T power(T e, T n, T m){
    T x = 1,p = e;
    while(n){
        if(n&1){
            x = mul(x,p,m);
        }
        p = mul(p,p,m);
        n >>= 1;
    }
    return x;
}
 
int a[maxn],res,n;
 
int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
 
void check(int num){
    int uc1 = a[1];
    int uc2 = 0;
    if(num<res){
        return;
    }
    for(int i = 2; i<=n; i++){
        if(a[i]%num==0){
            uc1 = gcd(uc1,a[i]);
        }else{
            if(uc2==0){
                uc2 = a[i];
            }else{
                uc2 = gcd(a[i],uc2);
            }
        }
    }
    if(uc2==0){
        res = max(res,uc1);
    }else{
        res = max(res,min(uc1,uc2));
    }
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
 
    int t;
 
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i<=n; i++){
            cin >> a[i];
        }
        res = -INF;
        sort(a+1,a+n+1);
        check(a[1]);
        for(int i = trunc(sqrt(a[1])); i>1; i--){
            if(a[1]%i==0){
                check(i);
                check(a[1]/i);
            }
        }
        cout << res << endl;
    }
    return 0;
}
