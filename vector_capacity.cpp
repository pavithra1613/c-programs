#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"max size ="<<v.max_size();
     cout<<"\nsize ="<<v.size(); 
     cout<<"\ncapacity="<<v.capacity(); 

     vector<int> v1(10);
    cout<<"\n\nmax size ="<<v1.max_size();
     cout<<"\nsize ="<<v1.size(); 
     cout<<"\ncapacity="<<v1.capacity(); 
    for(int i=0;i<5;i++)  v1.push_back(i);
 cout<<"\n\nmax size ="<<v1.max_size();
     cout<<"\nsize ="<<v1.size(); 
     cout<<"\ncapacity="<<v1.capacity(); 
     for(int i=0;i<v1.size();i++)  cout<<"\n"<<v1.at(i);


      vector<int> v2;
      v2.reserve(22);
     cout<<"\ncapacity="<<v2.capacity();
   
     //cout<<"\nmax size ="<<v.max_size();
}