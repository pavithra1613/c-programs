#include<iostream>
using namespace std;
class A{
    public:
    A(int x){
        cout<<"A"<<x;
    }
};
class C{
    public:
    C(int x){
        cout<<"C"<<x;
    }
};
class B: public C,public A{
    public:
    B(int x,int y,int z):A(x),C(y){
        cout<<"B"<<z;
    }
};
int main(){
    B obj(1,2,3);
    return 0;
}