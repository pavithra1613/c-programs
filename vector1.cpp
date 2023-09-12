#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<v.size()<<" "<<v.capacity()<<"\n";
    //v[0]=5;   segmentation fault
    v.push_back(1);
    v[0]=5;
    cout<<v[0];
     cout<<"\n"<<v.size()<<" "<<v.capacity()<<"\n";

     vector<int> v2(v);
     cout<<v2[0]<<"\n";
     //vector<char>v3(v);  compiler error
     vector <char> v3(5,66);
     for(int i=0;i<5;i++)cout<<v3[i]<<"  ";
     vector<char> v4(v3.begin(),v3.end());
     for(int i=0;i<v4.size();i++)cout<<"\n"<<v4[i];
     cout<<"\n"<<v4.size();
     v4[5]=65;   // size is still 5 only
     for(int i=0;i<v4.size();i++)cout<<v4[i];
        cout<<"\n"<<v4.size()<<"\n";

        cout<<(v4==v3);
        cout<<(v<v2)<<"\n";


    vector<int>v5(10);
    for(int i=0;i<v5.size();i++) cout<<v5[i];
     for(int i=0;i<v5.size();i++) v5[i]=i+1;
     cout<<"\n";
         for(int i=0;i<v5.size();i++) cout<<v5[i];
    vector<int>v6(v5);
    v5.clear();
    cout<<"\n"<<v5[0];
   // cout<<"\n"<<v5.at(0);  error
    cout<<"\nv5 "<<v5.size() <<" " <<v5.capacity();
    //v5[0]=8;
    v5.push_back(88);
     cout<<"\nv5 "<<v5.size()<<" "<<v5.capacity();

}