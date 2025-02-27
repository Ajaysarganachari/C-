#include<iostream>
#include<string>
using namespace std;

class MotorCycle{
    private:
    int year;
    string brand;
    string model;
    double price;
    double mileage;
    int weight;
    int tankCapacity;

    public:
    //constructor : is special type of function with the same name as class name 
    //used to initialize the data members of a class
    MotorCycle(string mod,double amt,double mile,int kg,int ltr){
        year=2025;
        brand="honda";
        model=mod;
        price=amt;
        mileage=mile;
        weight=kg;
        tankCapacity=ltr;
    }

    void accept(){
       
    }

    void disp(){
        cout<<"brand:"<<brand<<"\n";
        cout<<"year:"<<year<<"\n";
        cout<<"model:"<<model<<"\n";
        cout<<"price:"<<price<<"\n";
        cout<<"mileage:"<<mileage<<"kmpl"<<"\n";
        cout<<"weight:"<<weight<<"kg"<<"\n";
        cout<<"tankCapacity:"<<tankCapacity<<"ltr"<<"\n";
    }
};



int main(){
    MotorCycle m1("hornet 2.0",179900.00,40.00,177,12);
    m1.disp();

    return 0;
}
