#include <iostream>
using namespace std;

class Complex;

class Calculator
{
public:
   /* int add(int a, int b)
    {
        return (a + b);
    }*/

    int sumRealComplex(Complex c1, Complex c2);
};

class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    friend int Calculator ::sumRealComplex(Complex c1, Complex c2);

    void printNumber()
    {
        cout << "Your calculated sum is: " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex c1, Complex c2)
{
    return (c1.a + c2.a);
}

int main()
{
    Complex o1, o2;

    o1.setNumber(5, 4);
    o1.printNumber();

    o2.setNumber(5, 2);
    o2.printNumber();

    Calculator calc;

    int res = calc.sumRealComplex(o1, o2);

    cout << "THE SUM OF REAL PART IS: <<" << res << endl;

    return 0;
}