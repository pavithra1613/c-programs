#include<iostream>
using namespace std;
class student{
    int age;
    public:
    student(int a){
        age=a;
    }

    void getage(){
        cout<<age<<endl;
    }
};

int main(){
    student *ptr=new student(25);
    ptr->getage();
    delete ptr;
    return 0;

}