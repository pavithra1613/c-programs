#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str1[]={'g','e','e','k'};
    char str2[]="geek";
    string str3="geek";

    cout<<"\nsizeof() str1 "<<sizeof(str1);
    cout<<"\nsizeof() str2 "<<sizeof(str2);
    cout<<"\nsizeof() str3 "<<sizeof(str3);

    //cout<<"\nstrlen of str1 "<<strlen(str1);
    cout<<"\nstrlen of str2 "<<strlen(str2);
    //cout<<"\nstrlen of str3 "<<strlen(str3);

    //cout<<"\nstr1.size() "<<str1.size();
    //cout<<"\nstr2.size() "<<str2.size();
    cout<<"\nstr3.size() "<<str3.size();

    return 0;
}