/*

Write a complete C++ program to represent a class of a circle, give it an appropriate attributes and methods? i.e. radius, PI, area( ), circumference( ) */

#include <iostream>
using namespace std;

class circle{
private:
    int *r;
    float *pi;

public:
    float area(){
    return *r * *r * *pi;

    }

    float circum(){

    return 2* *r * *pi;
    }

    circle(){
    r=new int;
    pi=new float;
    cout<<"Hello from const 1\n";
    cout<<"Enter radius: ";
    cin>>*r;
    *pi=3.14;
    }

    ~circle(){
    delete r;
    delete pi;
    cout<<"\nhello from destructor";
    }

};//end of class


int main()
{
    circle c1;
    cout<<c1.area()<<endl<<c1.circum();

    return 0;

}

