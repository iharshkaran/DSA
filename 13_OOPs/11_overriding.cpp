#include<iostream>
using namespace std;
class Scooty{
public:
    int topSpeed;
    float mileage;
    virtual void sound(){
        cout<<"Vroom Vroom"<<endl;
    }
private:
    int bootSpace;
};
class Bike : public Scooty{
public:
    void sound(){
        cout<<"Dhroom Dhroom"<<endl;
    }
};
class SuperBike : public Scooty{
public:
    void sound(){
        cout<<"Zroom Zroom"<<endl;
    }
};
int main(){
    Scooty* x = new Bike(); //Object Pointer
    x->sound(); // Dynamic Polymorphism

    Scooty* s = new SuperBike();
    s->sound();
}