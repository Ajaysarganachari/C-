#include<iostream>
using namespace std;

class Abstraction{
    private:
    int a, b;
    public:
    void set(int x,int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"a:"<<a<<endl;
        cout<<"b:"<<b<<endl;
        
    }
};

int main(){
    Abstraction a;
    a.set(18,24);
    a.display();
    return 0;
}
