#include <iostream>
#include <cmath>
using namespace std;

class Complex   
{
    int a, b;             //private members

public:
    void setNumber(int n1, int n2)       //public member function
    {
        a = n1;
        b = n2;
    }
                                          //friend function
    friend Complex sumComplex(Complex o1, Complex o2);

    void printNumber()                   //public member function
    {
        cout << "Your number is: " << a << " + " << b << "i" << endl;
    }


};                              //complex return type with sumcomplex name and taking two objects of complex

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{

    Complex c1, c2, sum;

    c1.setNumber(1, 2);
    c1.printNumber();

    c2.setNumber(4, 6);
    c2.printNumber();
    
    sum=sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}