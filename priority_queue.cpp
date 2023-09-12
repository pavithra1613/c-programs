#include<queue>
#include<iostream>
using namespace std;
int main(){
    priority_queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(0);
    while(!q.empty()){
        cout<<"\n"<<q.top();
        q.pop()
        
    ;
    }
}