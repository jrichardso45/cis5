/* 
 * File:   main.cpp
 * Author: Jessica Richardson
 * Created on: March 31, 2020; 08:30 PM
 * Purpose:  Truth Table
 */

//System Libraries
#include <iostream>     //Input/Output Library
#include <iomanip>      //Format Library
#include <string>       //String Library
#include <cstdlib>      //Exit Function
#include <cstring>      //More String?
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    bool x,y;
    
    //Heading for the Table
    cout<<"X  Y  !X  !Y  X&&Y  X||Y  X^Y  X^Y^Y  X^Y^X"<<
            "!(X&&Y)  !X||Y  !(X||Y)  !X&&!Y"<<endl;

    //First row for the truth table
    x=true;
    y=true;
    cout<<(x?'T':'F')<<"  "
        <<(y?'T':'F')<<"   "
        <<(!x?'T':'F')<<"   "
        <<(!y?'T':'F')<<"    "
        <<(x&&y?'T':'F')<<"     "
        <<(x||y?'T':'F')<<"  ";
    cout<<endl;  
    
    //Second row for the truth table
    x=true;
    y=false;
    cout<<(x?'T':'F')<<"  "
        <<(y?'T':'F')<<"   "
        <<(!x?'T':'F')<<"   "
        <<(!y?'T':'F')<<"    "
        <<(x&&y?'T':'F')<<"     "
        <<(x||y?'T':'F')<<"  ";
    cout<<endl;  
 
    //Third row for the truth table
    x=false;
    y=true;
    cout<<(x?'T':'F')<<"  "
        <<(y?'T':'F')<<"   "
        <<(!x?'T':'F')<<"   "
        <<(!y?'T':'F')<<"    "
        <<(x&&y?'T':'F')<<"     "
        <<(x||y?'T':'F')<<"  ";
    cout<<endl;

    //Fourth row for the truth table
    x=false;
    y=false;
    cout<<(x?'T':'F')<<"  "
        <<(y?'T':'F')<<"   "
        <<(!x?'T':'F')<<"   "
        <<(!y?'T':'F')<<"    "
        <<(x&&y?'T':'F')<<"     "
        <<(x||y?'T':'F')<<"  ";
    cout<<endl;
    
    //Illustrate the swap using memory
    int a=2, b=3, temp;
    cout<<endl<<endl<<endl;
    cout<<"Before the swap using temp variable."<<endl;
    cout<<"a = "<<a<<", b = "<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"After the swap using temp variable."<<endl;
    cout<<"a = "<<a<<", b = "<<b<<endl;
    
    //Illustrate the swap using logic
    a=2, b=3;
    cout<<endl<<endl<<endl;
    cout<<"Before the swap using Logic in-place."<<endl;
    cout<<"a = "<<a<<", b = "<<b<<endl;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"After the swap using Logic in-place."<<endl;
    cout<<"a = "<<a<<", b = "<<b<<endl;
    
    //Exit stage right!
    return 0;
}