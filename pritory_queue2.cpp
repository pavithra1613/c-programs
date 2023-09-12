#include<queue>
#include<iostream>
using namespace std;
class compare{
    public:
    bool operator()(int x,int y){
        return (x>y);

    }
};
int main(){
    priority_queue<int,vector<int>,compare >q;
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