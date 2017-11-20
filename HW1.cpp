#include <iostream>
using namespace std;
class circle
{
private:
    int *r;
    float *pi;

public:

    circle()
    {   r=new int;
        pi=new float;
        cout<<"I am the first constructor\n";
        cout<<"enter radius: ";
        cin>>*r;
        *pi=3.14;
    }


    ~circle(){
    cout<<"\ndata deleted";
    delete r;
    delete pi;
    }

    float circum()
    {
        return 2* *pi* *r;

    }

    float area()
    {
        return *r* *r * *pi;

    }


}; //end if class

int main()
{

    circle c1;

    cout<<c1.area()<<endl<<c1.circum();

    return 0;

} //end of main
