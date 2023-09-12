#include<iostream>
#include<string.h>
using namespace std;


int main()
{
    int i=23;
    float f=23.456674567899f;
    double d=3423.123499999955;
    char c='p';
    string s="pavithra masani";
    char str[]="pavithra";

    cout<<"i ="<<i;
    cout<<"\nf ="<<f;
    cout<<"\nd ="<<d;
    cout<<"\nc ="<<c;
    cout<<"\ns ="<<s;
    cout<<"\nstr="<<str;
    cout<<"\nsize for s "<<size(s);
    //cout<<"\nlength for s "<<strlen(s);
     cout<<"\nsize for str "<<sizeof(str);


     string strlist[5]={"pavithra","naveena","isignal","c++"};
     for(int i=0;i<5;i++){
        cout<<"\n"<<strlist[i];
     }
    return 0;

}