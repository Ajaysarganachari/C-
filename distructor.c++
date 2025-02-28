#include<iostream>
#include<string>
using namespace std;

class Motorcycle { 
private:
    int year;
    string brand;
    string model;
    double Price;
    double mileage;
    int weight;
    int tankcapacity;

public:
    
    Motorcycle(){
        year = 2025;
        brand = "hero";
    }
    
  
    Motorcycle(string mod, double amt, double mile, int kg, int ltr){
        model = mod;
        Price = amt;
        mileage = mile;
        weight = kg;
        tankcapacity = ltr;
        brand = "hero"; 
    }

    void display() {
        cout << "Brand: " << brand << "\n";
        cout << "Year: " << year << "\n";
        cout << "Model: " << model << "\n";
        cout << "Price: " << Price << "\n";
        cout << "Mileage: " << mileage << "\n";
        cout << "Weight: " << weight << " kg\n";
        cout << "Tank Capacity: " << tankcapacity << " liters\n";
    }

    //destructor
A destructor is a special member function that is automatically called when an object is destroyed. Its primary purpose is to release resources or memory allocated during the lifetime of the object (for example, closing files or releasing dynamic memory).

    ~Motorcycle(){
        cout<<"destructor called"<<"\n";
        cout<<"memory cleared";
    }
};

int main() {
   
    Motorcycle m1("Splendor", 90000.00, 36.00, 177, 13);
    m1.display();
    return 0;
}
