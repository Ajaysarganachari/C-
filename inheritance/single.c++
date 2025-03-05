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
        cout<<"addtion:"<<c;
    }
};

int main(){
    B b1;
    b1.value();
    b1.add();
    return 0;
}
