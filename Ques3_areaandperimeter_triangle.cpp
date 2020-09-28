#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class Triangle
{
    public:
      int areaandperimeter(int side1, int side2, int side3);
};

int Triangle:: areaandperimeter(int a, int b, int c)
{
    
    cout<<"The area of triangle is: "<< (a+b+c)/2<<endl;
    cout<<"The perimeter of triangle is: "<<(a+b+c);
    return 0;
}
int main()
{
    Triangle t;
    t.areaandperimeter(3, 5, 7);
    return 0;
}