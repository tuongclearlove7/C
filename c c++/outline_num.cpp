#include<iostream>
int main() {
    int i=0;
    while(i<=99) {
        i+=1;
        switch(i){
        case 11:
        case 21:
        case 31:
        case 41:
        case 51:
        case 61:
        case 71:
        case 81:
        case 91:
            std::cout<<"\n";
        }
            std::cout<<i<<",";
    }
}
