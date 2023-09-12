#include<iostream>
using namespace std;
class A{
public:
	int a;
	int b;
A(int a,int b){
	this->a=a;
	this->b=b;
}

int getsum(){
	return(a+b);
}
};

int main(){
	A obj(3,7);
	A *ptr;
	ptr=&obj;
	(*ptr).a=5;
	cout<<obj.getsum()<<endl;
	return 0;
}
