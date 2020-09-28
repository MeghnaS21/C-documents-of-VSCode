/* WRITE A PROGRAM TO PRINT THE SUM & DIFFERENCE BETWEEN TWO NUMBERS USING CLASSES IN C++ ALSO FRIEND FUNCTION BY PASSING TWO NUMBERS AS OBJECTS  */ 

#include<iostream>
using namespace std;

class Sumdiff
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a=n1;
        b=n2;
    }

    friend Sumdiff resultplz(Sumdiff o1, Sumdiff o2);

    void printResult()
    {
        cout<<"numbers "<<a<<" "<<b<<endl;
    }
};

Sumdiff resultplz(Sumdiff o1, Sumdiff o2)
{
    Sumdiff o3;
    o3.setNumber((o1.a+o2.a), (o1.b-o2.b));
    return o3;
}

int main()
{
    Sumdiff s1, s2, res;

    s1.setNumber(5,8);
    s1.printResult();

    s2.setNumber(6,10);
    s2.printResult();
     
    
    res=resultplz(s1, s2);
    cout<<"------------- "<<endl;
    res.printResult();
    cout<<"------------- "<<endl;

    return 0;
}
