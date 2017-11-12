/*
A simple program to demonstrate a friend function access two classes
*/

#include<iostream>
using namespace std;
class employee;
class student
{
private:
    int *age;
    string *name;
    float *mark;

public:
    student(string n,int a, float m)
    {
        age = new int;
        name = new string;
        mark = new float;

        *age = a;
        *name = n;
        *mark = m;
    }

    ~student()
    {
        delete age;
        delete name;
        delete mark;
    }

    void print()
    {
        cout<<"student name: "<<*name<<endl;
        cout<<"student age: "<<*age<<endl;
        cout<<"student mark: "<<*mark<<endl;
    }

    void friend addAge(student&, employee&);
};


class employee
{
private:
    string *name;
    int *age;
    int *salary;

public:
    employee(string n, int a, int s)
    {
        name = new string;
        age = new int;
        salary = new int;

        *name =n;
        *age=a;
        *salary =s;
    }

    ~employee()
    {
        delete name;
        delete age;
        delete salary;
    }

    void print()
    {
        cout<<"employee name: "<<*name<<endl;
        cout<<"employee age: "<<*age<<endl;
        cout<<"employee salary: "<<*salary<<endl;
    }
    void friend addAge(student&, employee&);

};



void addAge(student &s, employee &e)
{

    *s.age+=1;
    *e.age+=1;
}

int main()
{

    student s1("ali",20,80.5);
    s1.print();

    employee e1("ahmed",35,700);
    e1.print();

    addAge(s1,e1);

    cout<<endl<<"age of both is incremented"<<endl;

    s1.print();
    e1.print();


    return 0;
}
