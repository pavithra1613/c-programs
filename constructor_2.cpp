#include<iostream>
using namespace std;
class myclass{
    int a;
    public:
    myclass(int x){
        a=x;
        cout<<"constructor:"<<a<<endl;
    }
    myclass(){
        cout<<"default constructor"<<endl;
    }
    int getvalue(){
        return a;
    }
};
int main(){
    myclass obj1(10);
    myclass obj2;
    obj1.getvalue();
    obj2.getvalue();
    return 0;
}