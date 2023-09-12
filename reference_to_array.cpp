#include<iostream>
#include<vector>
using namespace std;
void display(int &r,int n){
    cout<<&r;

}
void fun(int &x){
    cout<<"\nin fun x:"<<&x;
}
int main(){
    int a=5;
    cout<<"\nmain a:"<<&a;
    fun(a);

    int arr[5]={1,2,3,4,5};
    cout<<"\nmain :"<<&arr<<endl;
    display(arr,5);
    
    return 0;
}