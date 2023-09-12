#include<iostream>
#include<queue>
using namespace std;
void display(priority_queue<int>&q){
    cout<<&q<<endl;
    cout<<"size :"<<q.size()<<endl;
    /*for(int i=0;i<q.size();i++){

        cout<<"i "<<i<<" "<<q.top()<<"\n";
        q.pop();
               
    }*/
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
}