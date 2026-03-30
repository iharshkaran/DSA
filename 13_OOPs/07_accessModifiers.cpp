#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    Student(string n, int a, float g){
        name = n;
        age = a;
        gpa = g;
    }

    void display(Student s){
        cout<<s.name<<" "<<s.age<<" "<<s.gpa<<endl;
    }

    float getGPA(){
        return gpa;
    }
    void setGPA(float g){
        gpa = g;
    }
private:
    float gpa;
};


void change(Student* s){
    s->name = "Rose"; //(*s).name = "Rose"
    cout<<s->name<<endl;
}

int main() {
    Student s1("Adam",20,8.5);

    s1.display(s1);
    s1.setGPA(8.3);
    s1.display(s1);
    cout<<s1.getGPA();

}