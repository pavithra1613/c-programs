#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v{1,2,3,4,5,6,7};
    vector<int>::iterator it=v.begin();
    it+=3;
    cout<<*it;
    
}