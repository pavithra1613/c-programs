#include<iostream>
using namespace std;
class myclass{
    int a;
    public:

    myclass(int x){
    a=x;
    cout<<"constructor:"<<a<<endl;
    }
    ~myclass(){
        cout<<"destructor"<<a<<endl;

    }
};
void myfun(int x){
   static myclass obj(x);

}

int main(){
myclass obj1(1),obj2(2),obj3(3);
myfun(4);
myfun(5);
return 0;

}