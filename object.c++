#include<iostream>
#include<string>
using namespace std;

class Emp {
    int eid;
    string ename;
    float esal;
    
public: 
    
    void accept() {
        cout << "Enter employee details (eid, name, salary): ";
        cin >> eid >> ename >> esal;
    }

    
    void display() {
        cout << "Employee Details: ";
        cout << "ID: " << eid << ", Name: " << ename << ", Salary: " << esal << endl;
    }
};

int main() {
    Emp e1;  
    e1.accept();  
    e1.display();  
    return 0;
}
