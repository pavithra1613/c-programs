#include<iostream>
using namespace std;
class A{
    public:
    A(int x){
        cout<<"A"<<x;
    }
    //A(){};
};

class B:public A{
    public:
    B(int x){
        cout<<"B"<<x;
    }
};

int main(){
    B obj(12);
    return 0;
}