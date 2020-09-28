#include<iostream>
using namespace std;

class pointerExample
{
    private:
      int a;
      int b;
    public:
      void setvalue(int x, int y)
      {
          a=x;
          b=y;
      }
      void add()
      {
          cout<<"addition = "<<a+b<<endl;
      }
};

int main()
{
    pointerExample obj, *p;
    p=&obj;
    p->setvalue(5,7);
    p->add();
    return 0;
}