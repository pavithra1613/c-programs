#include<iostream>
using namespace std;
int main(){
    int *intp;
    float *floatp;
    intp= new int;
    floatp=new float(34.567);

    *intp=24;

    cout<<*intp<<endl;
    cout<<*floatp<<endl;

    delete intp;
    delete floatp;
    return 0;
}