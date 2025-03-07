#include<iostream>
#include<string>
using namespace std;

class A{
    public:
    int a, b;
    void add()
    {
        cout << "Enter two values for addition: ";
        cin >> a >> b;
        a = a + b;
        cout << "Addition: " << a << endl;
    }
};

class B{
    public:
    int c, d;
    void sub()
    {
        cout << "Enter two values for subtraction: ";
        cin >> c >> d;
        c = c - d;
        cout << "Subtraction: " << c << endl;
    }
};

class C : public A, public B{
    public:
    int result;
    void multiple()
    {
        result = a * c;  
        cout << "Multiplication: " << result << endl;
    }
};

int main()
{
    C e;
    e.add();       
    e.sub();       
    e.multiple();  
}
