#include<iostream>
using namespace std;
class complex{
    int real;
    int img;

    public:
    complex(int r,int i)
    {
        real=r;
        img=i;
    }

    void operator=(const complex&ob){
        real=ob.real;
        img=ob.img;

    }
    void print(){
        cout<<real <<"+i"<<img<<endl;

    }
};

int main(){
    complex c1(2,3);
    complex c2(4,6);
    complex c3;
    c3 = c1+c2;// simplified view as in built in data type

    cout<<"before overloading assignment operator "<<endl;
    cout<<"c1 complex number"<<endl;
    c1.print();
    cout<<"c2 complex number "<<endl;
    c2.print();


    c1=c2;

    cout<<"after overloading assignment operator "<<endl;
    cout<<"c1 complex number"<<endl;
    c1.print();
    cout<<"c2 complex number "<<endl;
    c2.print();

    return 0;

}