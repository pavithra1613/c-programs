#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v1(10);
    for(int i=0;i<v1.size();i++) v1[i]=i+1;
    vector <int>v2;
    v2=v1;
    for(int i=0;i<v2.size();i++) cout<<v2[i]<<" ";
}