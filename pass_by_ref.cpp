#include<iostream>
using namespace std;

void swap(int &x,int &y)
{
int a=x;
x=y;
y=a;
}

int main(){

int firstname=10;
int secondname =20;

cout<<"\nbefore swaping "<<firstname  <<secondname;

swap(firstname,secondname);

cout<<"\nafterswapping "<<firstname <<secondname;
return 0;

}