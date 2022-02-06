// chuỗi ký tự và nhập chuỗi ký tự trong c++
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name = "Tuong clearlove7";
    cout << name << endl;
    
    cout << "nhap ten cua ban vao : ";
    string yourname;
    getline(cin, yourname);
    cout << "nhap tuoi cua ban vao : ";
    string age;
    getline(cin, age);
    cout << "your name is " << yourname <<endl;
    cout << "your age is " << age << endl;

/* nhập vào các ký tự chuỗi cho đến khi gặp ký tự chuỗi là 1
thì sẽ kết thúc chương trình
*/        
        cout << "nhap vao : ";
        string strText;
        getline(cin, strText, '1');
        cout << "Your text: " << endl;
        cout << strText << endl;
        
        //nối chuỗi
        string a = "tuong";
        string b = "clearlove7";
        string c = a + b;
        cout << c << "\n";
        a += "string"; // nối biến a với string
        cout << a << endl;

        // tính độ dài ký tự trong chuỗi
        string myname = "tuong";
        cout << myname << " co " <<" do dai la " << myname.length() << endl;
        cout << myname << " co " << myname.size() << " ky tu";
        return 0;
}




