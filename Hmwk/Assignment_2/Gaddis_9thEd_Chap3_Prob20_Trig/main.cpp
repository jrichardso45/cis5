/* 
 * File:   main.cpp
 * Author: Jessica Richardson
 * Created on: March 17, 2020; 07:50 PM
 * Purpose:  Trig
 */

//System Libraries
#include <iostream>     //Input/Output Library
#include <iomanip>      //Format Library
#include <string>       //String Library
#include <cmath>        //Math Library 
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float ang,sine,cosin,tang,angr,pie;
    pie=3.14159;
    
    //Initialize or input i.e. set variable values
    cout<<"Calculate trig functions\nInput the angle in degrees."<<endl;
    cin>>ang;
    
    //Map inputs -> outputs
    angr=ang*(3.14159/180);
    sine=sin(angr);
    cosin=cos(angr);
    tang=tan(angr);
    
    //Display the outputs
    cout<<"sin("<<ang<<") = "<<setprecision(4)<<sine<<endl;
    cout<<"cos("<<ang<<") = "<<setprecision(4)<<cosin<<endl;
    cout<<"tan("<<ang<<") = "<<showpoint<<fixed<<setprecision(4)<<tang;
    
    //Exit stage right or left!
    return 0;
}