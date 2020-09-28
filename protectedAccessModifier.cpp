#include<iostream>
using namespace std;

class Base{
    protected:
       int a;
    private:
       int b;

};

class derived: protected Base{
    
};


int main()
{
    Base b;
    derived a;
    return 0;
}