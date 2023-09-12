#include<iostream>
using namespace std;

void fun(string name="norway")
{
    cout<<"name ="<<name <<endl;
}
int main()
{
    fun("swedon");
    fun("india");
    fun();
    fun("usa");
    return 0;
    }