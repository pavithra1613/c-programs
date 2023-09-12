#include<iostream>
using namespace std;
class A{
    int a;
    public:
    A(){
        a=10;
        cout<<"default constructor "<<a<<endl;

    }
  /* A(const A&q){
        a=q.a;
        cout<<"copy constructor :"<<a<< endl;

    }*/

    void set_a(int x){
    a=x;
    }

    void display(){
        cout<<a <<endl;
    }
};

int main(){
    A obj;
    obj.set_a(11);
    A a1=obj;
    A a2(obj);
    obj.display();
    a1.display();
    a2.display();
    return 0;

}