#include <iostream>
#include <string>

//Preprocessor definitions

#define VAL 20

using namespace std;

//Literals are a type of constants

int main(){
    /*
    Literal constants can be classified into: 
    1. Integer
    2. Floating-point
    3. Characters
    4. Strings
    5. Boolean
    6. Pointers
    7. User-defined literals
    */

   int a = 6; //here 6 is a integer literal
   float b = 7.5; //7.5 is a floating point literal
   char c = 'a'; // 'a' is a character literal
   string str = "this is a string"; // "this is a string" is a string literal

    cout<<str;
   cout<<"\a";
   cout<<str<<endl;

    //line-continuation
    
    string str2 = "This a multiline string which \
    will be showed in a single line"; // Here slash(\) is used to continue in the same line

    cout<<str2<<endl;

    bool fl = true; //boolean literal
    bool f2 = false; //boolean literal
    int* f3 = nullptr;//boolean literal

    //preprocessor definitions

    cout<<VAL;

    return 0;
}