#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v;
cout<<v.size()<<" ";
for(int i=0;i<10;i++)v.push_back(i);

cout<<v.size()<<" ";

v.resize(4);
cout<<v.size()<<" ";
for(int i=0;i<v.size();i++)  cout<<"\n"<<v[i];
//for(int i=0;i<10;i++)  cout<<"\n"<<v.at(i);
}