#include<iostream>
using namespace std;
class A{
    public:
    A(int x){
        cout<<"A"<<x;
    }
    void get(){
        cout<<"hello world";
    }
};
class B:public A{
    public:
    B(int x,int y):A(x){
        cout<<"B"<<y;
    }
};
class C: public B{
    public:
    C(int x,int y,int z):B(x,y){
        get();
        cout<<"C"<<z;
    }
};
int main(){
    C obj(1,2,3);
    return 0;
}