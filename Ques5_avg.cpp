#include<iostream>
#include<cmath>
using namespace std;

class Average
{
    float a, b, c;
    public:
      void setData(void);
      void calc_and_print(void);
};
void Average::setData(void)
    {
        cout<<"Enter three numbers: "<<endl;
        cin>>a>>b>>c;
    }

void Average::calc_and_print(void)
{
    cout<<"Average of three numbers: "<<(a+b+c)/3;   
}

int main()
{
    Average a;
    a.setData();
    a.calc_and_print();
    return 0;
}