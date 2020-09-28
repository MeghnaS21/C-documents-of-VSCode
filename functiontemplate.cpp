#include <iostream>
using namespace std;

template <typename T>

T add(T x, T y)
{
    return (x + y);
}

int main()
{
    cout<<add<int>(3, 7)<<endl;
    cout<<add<float>(3.5f, 5.2f)<<endl;
    cout<<add<double>(4.89076, 6.77953)<<endl;


    return 0;
}
