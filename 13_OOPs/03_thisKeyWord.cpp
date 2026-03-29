#include<iostream>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;
    Cricketer(string name, int runs){
        this->name = name;
        this->runs = runs;
    }
    //function
    void print(){
        cout<<this->name<<" "<<this->runs<<endl;
    }
};
int main(){
    Cricketer c1("Virat Kohli",28000);
    Cricketer c2("Rohit Sharma",19900);

    c1.print();
    c2.print();

}