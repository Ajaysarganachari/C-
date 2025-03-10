/*#include<iostream>
using namespace std;
 class Animal{
    public:
    void makesound(){
        cout<<"animal make sound\n";
    }
 };
 class Dog: public Animal{
    public :
    void makesound(){
        cout<<"dog breaks\n";
    }
 };
 class Cat:public Animal{
    public:
   void makesound(){
        cout<<"cat meows\n";
    }
 };
 
 int main(){
    Animal animal;
    Dog dog;
    Cat cat;
    animal.makesound();
    dog.makesound();
    cat.makesound();
    return 0;
 }*/
 #include<iostream>
 using namespace std;

 class Team{
    public:
     void win(){
        cout<<"india win champion trophy\n";
     }
 };
 class Rohit:public Team{
    public:
    void win(){
        cout<<"winning captain :rohit sharma\n";
    }
 };
 class Gill:public Team{
    public :
    void win(){
        cout<<"winning vice captain: shubhman gill\n";
    }
 };
 class Rahul:public Team{
    public:
    void win(){
        cout<<"winning as a player:kl rahul\n";
    }
 };

 int main(){
    Team team;
    Rohit rohit;
    Gill gill;
    Rahul rahul;

    team.win();
    rohit.win();
    gill.win();
    rahul.win();

    return 0;


 }
