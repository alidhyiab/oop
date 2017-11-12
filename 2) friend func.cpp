/*
A simple program to demonstrate a friend function that duplicate the rectangle dimensions
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
    friend rectangle duplicate(rectangle);
};


rectangle duplicate(rectangle r){

rectangle temp(0,0);
temp.width = r.width*2;
temp.length=r.length*2;
return temp;

}



int main(){

    rectangle r1(3,5);


    cout<<"the rectangle r1 area is: "<<r1.area()<<endl;
    cout<<"the rectangle r1 circumference is: "<<r1.circumference()<<endl;

    rectangle r2(2,6);

    cout<<"the rectangle r2 area is: "<<r2.area()<<endl;
    cout<<"the rectangle r2 circumference is: "<<r2.circumference()<<endl;

    rectangle r3=duplicate (r2);
    cout<<"the rectangle r3 area is: "<<r3.area()<<" because width*2 * length*2"<<endl;
    return 0;
}
