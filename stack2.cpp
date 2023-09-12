#include<iostream>
#include<stack>
using namespace std;
template <class T>
void display(stack<T>s){
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}
int main(){
    stack<int>s;
    for(int i=1;i<10;i++){
        s.push(i);


    }
    display(s);
    stack<int> s2;
    s2=s;
    display(s2);

    stack<int>s3;
    s3.push(222);
    cout<<"\ns3:"<<&s3;
    cout<<"\ns2:"<<&s2<<endl;
    display(s3);
    display(s2);
    s3.swap(s2);
    cout<<"\n\ns3:"<<&s3;
    cout<<"\ns2:"<<&s2<<endl;
    display(s3);
    display(s2);
}