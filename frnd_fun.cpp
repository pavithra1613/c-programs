#include<iostream>
using namespace std;

class A{
	int a;
	public:
		A(){
			a=5;
		}
		friend void modify();
};

void modify(){
	A obj;
	cout<<"private members of class A "<<obj.a;
}

int main(){
	A obj;
	modify();
	return 0;
}
