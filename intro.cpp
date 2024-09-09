#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout<< "Hell world" << endl;

    // data types ---> int float double char bool string
    int a= 10,b = 2;    //4 bytes
    float c = 3.14f;    //4 bytes
    double d = 9.595;   //8 bytes
    char e = 'A';       //1 byte
    string s = "Aryan Rajput";
    bool f = true;

    cout << a <<"\n";
    cout << b <<"\n";
    cout << c <<"\n";
    cout << d <<"\n";
    cout << e <<"\n";
    cout << s <<"\n";
    cout << f <<"\n";

    // operators
    cout << "arithmetic operators" << "\t" << "+, -, *, /, %" << "\n";
    cout << "assignment operators" << "\t" << "assigns value to a variable " << "\n";
    cout << "comaparision operator"<< "\t" << "compares value"<<"";
    cout << "logical operators" <<"\t" << "&& ie logical AND, || ie Logical OR, ! ie logical NOT";


    return 0;
}