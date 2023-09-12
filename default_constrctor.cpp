#include<iostream>
using namespace std;
class myclass{
    public:
    char ch;
    int a,b;
    myclass(){
        cout<<"default constructor"<<endl;
    }
};
int main(){
    myclass obj;
    return 0;
}