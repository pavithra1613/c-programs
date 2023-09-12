#include<iostream>
#include<list>
using namespace std;
void display(list<int>&l){
    cout<<&l<<endl;
    for(auto it=l.begin();it!=l.end();it++){
            cout<<*it<<endl; 
    }
}
int main(){
    list<int>l1;
    cout<<&l1<<endl;
    for(int i=0;i<10;i++){
        l1.push_back(i);
      
    }
      display(l1);
}