#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
    //---------------------------------------------WITHOUT CONST KEYWORD--------------------------------------------------------
    //VALUES OF VARIABLE INSIDE THE BLOCK ARE CHANGEABLE
    /*int a=32;
    cout<<"Value of a: "<<a<<endl;
     a=23;
    cout<<"Value of a: "<<a<<endl;*/

    //-------------------------------------------------------------CONST KEYWORD-----------------------------------------------
    //NOW USING CONST KEYWORD TO PREVENT CHANGING OF VVALUES IN C++
    //const int a=32;
    //cout<<"Value of a: "<<a<<endl;
    //int a=34;
    //cout<<"Value of a: "<<a<<endl;

    //output==>> error: assignment of read-only variable 'a'
    //USES- WHEN U DON'T WANT TO CHANGE THE VALUES ACCIDENTALY
    
    //-------------------------------------------------------------------------------------MANIPULATORS----------------------------------
    //MANIPULATORS(helps in formating data display)==endl,setw() in iomanip headerfile

    /*int a=5, b=45, c=12345;
    cout<<"The value of a without setw() is: "<<a<<endl; 
    cout<<"The value of b without setw() is: "<<b<<endl; 
    cout<<"The value of c without setw() is: "<<c<<endl; 

    cout<<"The value of c is: "<<setw(5)<<a<<endl; 
    cout<<"The value of c is: "<<setw(5)<<b<<endl; 
    cout<<"The value of c is: "<<setw(5)<<c<<endl;

    output-->> The value of a without setw() is: 5
               The value of b without setw() is: 45
               The value of c without setw() is: 12345
               The value of c is:     5
               The value of c is:    45
               The value of c is: 12345  */

    //--------------------OPERATOR PRECEDENCE-----------------------------------------------------
    

    return 0; 
}