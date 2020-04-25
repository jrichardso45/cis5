/* 
 * File:   main.cpp
 * Author: Jessica Richardson
 * Created on: March 17, 2020; 07:00 PM
 * Purpose:  Temp
 */

//System Libraries
#include <iostream>     //Input/Output Library
#include <iomanip>      //Format Library
#include <string>       //String Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float tempc,tempf;
    //Initialize or input i.e. set variable values
    cout<<"Temperature Converter\nInput Degrees Fahrenheit"<<endl;
    cin>>tempf;
    
    //Map inputs -> outputs
    tempc=5*(tempf-32)/9;
    
    //Display the outputs
    cout<<showpoint<<fixed<<setprecision(1)<<tempf<<" Degrees Fahrenheit = "
        <<tempc<<fixed<<setprecision(1)<<" Degrees Centigrade";
    
    //Exit stage right or left!
    return 0;
}