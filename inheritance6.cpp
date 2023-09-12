#include<iostream>
using namespace std;
class A{
    public:
    A(int x){
        cout<<"A"<<x;
    }
};
class B:public A{
    public:
    B(int x):A(x){
        cout<<"B"<<x;
    }
};
class C: public B{
    public:
    C(int x,int y,int z):A(x),B(y){
        cout<<"C"<<z;
    }
};
int main(){
    C obj(1,2,3);
    return 0;
}