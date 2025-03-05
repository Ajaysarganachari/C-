#include<iostream>
#include<string>
using namespace std;

class A 
{
    public:
    int a,b;
    void value()
    {
        cout<<"enter value=";
        cin>>a>>b;

    }
};
class B : public A{
    public:
    int c;
    void add()
    {
        c=a+b;
        cout<<"addtion:"<<c<<"\n";
    }
};

class C:public B{
    public:
    int d;
    void sub()
    {
        d=c-24;
        cout<<"sub:"<<d<<"\n";
    }
};


int main(){
     C e;
    e.value();
    e.add();
    e.sub();
    return 0;
}
