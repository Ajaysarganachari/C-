#include<iostream>
using namespace std;

int main()
{
    try
    {
        int age=20;
        if(age>+18)
        {
            cout<<"Access Granted:you are eligible\n";
        }
        else
        {
            throw(age);
        }
    }
    catch(int num)
    {
        cout<<"Access Denied:you must be atleast 18 years old..\n";
        cout<<"Age is:"<<num;
    }
    return 0;
}
