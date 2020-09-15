/*
  Author:Fatma Cemile Serce
  Date:September, 2019
  Description:Write a C++ program that asks the user to enter two integers as inputs and
    stores them in the variables 'a' and 'b' respectively. Declare also two integer
    pointers named ptrA and ptrB. Assign the values of 'a' and 'b' to ptrA and
    ptrB respectively, and display them as shown below.
    Enter value of A:5
    Enter value of B:6
    Value of ptrA is5 stored in address 0x7ffee48c588c
    Value of ptrB is6 stored in address 0x7ffee48c5888
*/
#include <iostream>

using namespace std;

int main(){
    int a, b;           //local variables stored in the stack
    int *ptrA, *ptrB;   //local pointer variables stored in the stack

    cout<<"Enter value of A:";
    cin>>a;      
    cout<<"Enter value of B:";
    cin>>b;

    ptrA = &a;  //ptrA points to the variable a
    ptrB = &b;  //ptrB points to the variable b

    //*ptrA gives the value at the address ptrA is pointing at
    //ptrA gives the address ptrA is pointing
    cout<<"Value of ptrA is"<<*ptrA<<" stored in address "<<ptrA<<endl;
    cout<<"Value of ptrB is"<<*ptrB<<" stored in address "<<ptrB<<endl;

}