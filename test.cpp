#include<iostream>
using namespace std;
int main(){
    //pointer --> Pointer is a datatype that holds the address of another datatypes
    int a = 3;
    int* b; //int* indicates that b is a pointer that holds the address of an integer variable
    b = &a; // b holds the address of integer variable a. 
    cout<<"The value at a is "<<a<<endl; // print the value of a
    cout<<"The address of a is "<<&a<<endl;  // print the address of a
    cout<<"The address of a is "<<b<<endl;  // print the address a which is hold by pointer b 
    cout<<"The value at address b is "<<*b<<endl;  // print the value at address b . That means, b is pointing to address a and in this address the value at a is stored.
    cout<<"The address of b is "<<&b<<endl;  // print the address of b
    // pointer to pointer 
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;  // print the address of b
    cout<<"The value at c is "<<c<<endl;  // print the value at c which is the address of b
    cout<<"The address of c is "<<&c<<endl;  // print the address of c
    cout<<"The value at address of c "<<*c<<endl;  // print the value at address of c which holds the address of b and b holds the address of a
    cout<<"The value at value at c is"<<**c<<endl;
}