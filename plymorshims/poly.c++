#include<iostream>
using namespace std;

class Math{
 public:
 int add(int a,int b){ //same name but diffrent parameters
    return a+b;
 }
 double add(double a,double b){
    return a+b;
 }
};
int main()
{
    Math obj;
    cout<<"sum(int):"<<obj.add(18,24)<<endl;
    cout<<"sum(double):"<<obj.add(18.5,24.5)<<endl;
    return 0;
}
