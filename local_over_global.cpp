#include<iostream>
using namespace std;

int add(int, int);
int x=5;

int main()
{
    int a, b, x=10;
    cout<<"Enter two number"<<endl;
    cin>>a>>b;
    int sum=add(a,b);
    cout<<"Sum is : "<<sum<<endl;
    cout<<"Local variable: "<<x<<endl;
    cout<<"Global Variable: "<<::x<<endl;
    cout<<"Conclusion, LOCAL OVER GLOBAL";
    return 0;
}
int add(int x, int y)
{
    return (x+y);
}