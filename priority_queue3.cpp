#include<iostream>
#include<queue>
using namespace std;
template <class T>


void display(priority_queue<T>&q){
    cout<<&q<<endl;
    cout<<"size :"<<q.size()<<endl;
   while(!q.empty()){
         cout<<"\n"<<q.top()<<"\n";
        q.pop();
    }
}

void display(priority_queue<string ,vector<string>, greater<string>>&q){
    cout<<&q<<endl;
    cout<<"size :"<<q.size()<<endl;
   while(!q.empty()){
         cout<<"\n"<<q.top()<<"\n";
        q.pop();
    }
}
int main(){
    priority_queue<int> q1;
    cout<<&q1<<endl;
    for(int i=0;i<10;i++)
       q1.push(i);
    display(q1);

    priority_queue<string> q2;
    q2.push("ab");
    q2.push("xy");
    q2.push("aa");
    display(q2);

    priority_queue<string ,vector<string>,greater<string> >q3;
    q3.push("az");
    q3.push("Az");
    q3.push("pavi");
    display(q3);

}