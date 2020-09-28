#include<iostream>
#include<cmath>
using namespace std;

class Rectangle
{
    int length, breadth;
    public:
      void setDim(void);
      void getArray(void);
};

void Rectangle::setDim(void)
{
    cout<<"Enter length: "<<endl;
    cin>>length;
    cout<<"Enter breadth: "<<endl;
    cin>>breadth;
}

void Rectangle::getArray(void)
{
    cout<<"Area of Rectangle: "<<(length*breadth)<<endl;
}

int main()
{
    Rectangle r;
    r.setDim();
    r.getArray();
    return 0;
}