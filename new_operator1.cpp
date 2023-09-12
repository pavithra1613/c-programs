#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number :";
    cin>>num;
    float *ptr=new float[num];

    cout<<"enter cgpa of students "<<endl;
    for(int i=0;i<num;i++){
        cout<<"\nstudent "<<i+1<<": ";
        cin>>ptr[i];
    }

    cout<<"display cgpa of students "<<endl;
    for(int i=0;i<num;i++){
        cout<<"student "<<i+1<<":"<<*(ptr+i)<<endl;
        
    }

    delete ptr;
}