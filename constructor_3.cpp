#include<iostream>
using namespace std;
class myclass{
    public:
    char ch;
    int a,b;
    myclass(){
        a=0;
        b=0;
        ch='a';

    }
    myclass(char c){
        ch=c;

    }
    myclass(int x,int y){
        a=x;
        b=y;
    }
    void get(){
        cout<<a<<" "<<b<<" "<<ch<<endl;
    }
};

int main(){
myclass ob1,ob2('z'),ob3(4,8);
ob1.get();
ob2.get();
ob3.get();
return 0;
}
