#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;

/*
Data types can be maily classified as: -
1. Character [char]
2. Numerical Integer Types [int]
3. Floating point Types [float, double]
4. Boolean [bool]
        
*/

int main(){
    //Declaring variables

    int a;
    char b;
    float c;
    double d;

    //Initialisation

    a =5;
    b = 'a';
    c = 34.12;
    d = 893.124;

    cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d<<"\n";

    //Type Deduction : Auto and decltype
    // auto -> the type of variable will be of the type of value used to initialise it.
    // decltype -> if the variable is not initialised, only declared 

    auto a1 = a; // a1 will have the data type of a
    decltype(b) a2; // a2 will have the data type of b

    cout<<"\n"<<typeid(a1).name();
    cout<<"\n"<<typeid(a2).name()<<"\n";

    //STRINGS

    string str1;
    string str2("This is a string");
    str1 = "This is also a string";

    cout<<str1<<"\n"<<str2<<endl;//endl ends the line i.e. prints the new line character and flushes the stream.

    return 0;
}