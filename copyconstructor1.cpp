#include<iostream>
using namespace std;
class point{
    int x;
    int y;
    public:
    point(int x1,int y1){
        x=x1;
        y=y1;
    }
    
    point(const point&p){
        x=p.x;
        y=p.y;

    }
    void display(){
        cout<<"x :"<<x<<" ,y :"<<y<<endl;
    }
};

int main(){
    point p1(10,15);
    point p2=p1;
    cout<<"point p1:"<<endl;
    p1.display();
    cout<<"point p2 :"<<endl;
    p2.display();

}