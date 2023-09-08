#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
class TH{
  private: 
    vector <int> a;
    public:
          friend istream &operator >> (istream &is, TH &b)
          {
              int n;
                is >> n; 
                b.a.resize(n);
                for (int i = 0; i < n; i++) {
                is >> b.a[i] ;
             }
            return is;
          }
          friend ostream &operator << (ostream &os, TH b)
          {
                for (int i = 0; i < b.a.size(); i++)
                 {
                   os << b.a[i] << "   ";
                 }
            return os;
          }
          TH operator+(TH b)
          {
        	TH c;
		
			for (int i=0;i<a.size();++i)
			{	
			c.a.push_back(a[i]);
			}
		
			for (int i=0;i<b.a.size(); ++i)
			{	
			c.a.push_back(b.a[i]);
			}
		
	 		return c;
          }

           TH operator-(TH b)
           {
           TH t;
           t.a.resize(a.size() - b.a.size());
           merge(a.begin(), a.end(), b.a.begin(), b.a.end(), t.a.begin());
           return t;
           }
           TH operator*(TH b)
           {
             TH t;
             t*=b.t;
             return t;
           }
          
          
  

};

int main()
{
    TH a, b, c,k;
    cout <<"Nhap tap hop a : "; cin >> a;
    cout <<"Nhap tap hop b : "; cin >> b;
    cout << a << b;

    c = a + b;
    cout <<"\n hop cua a va b la " << c;
    
    c = a - b ;
    cout << c ;
    
  // return 0;
}













