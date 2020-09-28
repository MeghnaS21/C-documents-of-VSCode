#include <iostream>
using namespace std;

class MyBaseClass
{
public:
   int x;    //dta members are kept private by default

   //default constructor in public section--- it will initialise the data members. And it has to be in public only
   MyBaseClass()
   {
      x=0;  //public
      y=0;  //protected
      z=0;  //private
   }
   void printprotecteddata()
   {
      cout<<"Y: "<<y<<endl;
   }

protected:
   int y;

private:
   int z;

};

class MYderivedclass : public MyBaseClass
{
   //we have protected int  -x and protected int y
};

class MYsecondderivedclass : protected MYderivedclass
{
   //we have protected int  -x and protected int y
   void printprivatemember()
   {
      cout<<"X: "<<x<<endl; 
      cout<<"Y: "<<y<<endl; 
   }
};


void myoutsidefunction(MyBaseClass obj) //this function i s directly accessing peivate and protecteed meebrs-- throws an error
{
   cout<<"X: "<<obj.x<<endl;
   //cout<<"Y: "<<obj.y<<endl;---- throws error
   obj.printprotecteddata();
 

   //cout<<"Z: "<<obj.z<<endl;

}

int main()
{
   MyBaseClass obj1;
   //myoutsidefunction(obj1);
   MYderivedclass obj2;
   cout<<"X: "<<obj2.x;
   return 0;
}