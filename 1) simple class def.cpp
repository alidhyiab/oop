/*
A simple program to demonstrate a simple class definition
(a class constructor added)
*/

#include<iostream>
using namespace std;

class rectangle{
  private:
    int width;
    int length;

 public:
    rectangle(int x, int y){
        width = x;
        length = y;
    }

    ~rectangle(){
       cout<<"hi I am a destuctor I will be invoked when the object dies"<<endl;
    }

    int area(){
        return (width * length);
    }

    int circumference(){
        return (width+length)*2;
    }
};
int main(){

    rectangle r1(3,5);


    cout<<"the rectangle r1 area is: "<<r1.area()<<endl;
    cout<<"the rectangle r1 circumference is: "<<r1.circumference()<<endl;

    rectangle r2(2,6);

    cout<<"the rectangle r2 area is: "<<r2.area()<<endl;
    cout<<"the rectangle r2 circumference is: "<<r2.circumference();

    return 0;
}
