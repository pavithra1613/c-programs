#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int>v{1,2,3,4,5,6,7,8,9};
    //vector<int>::reverse_iterator it;
    for(auto it=v.rbegin();it!=v.rend();it++) 
        cout<<*it<<" ";
}
