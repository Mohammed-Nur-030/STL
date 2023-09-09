#include<bits/stdc++.h>
using namespace std;//used to declare a scope
namespace raj{
    int val=50;
    int getVal(){
        return val*10;
    }
}
int main(){
    double val=10.00;
    cout<<val<<endl; //prints 10.00
    cout<<raj::val<<endl;//prints 50
    cout<<raj::getVal()<<endl; //prints 500


 return 0;
}