/* 
 * File:   main.cpp
 * Author: Jessica Richardson
 * Created on: March 17, 2020; 07:00 PM
 * Purpose:  Insurance
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
    int insur,replcmt;
    
    //Initialize or input i.e. set variable values
    cout<<"Insurance Calculator\nHow much is your house worth?"<<endl;
    cin>>replcmt;
    
    //Map inputs -> outputs
    insur=0.8*replcmt;
    
    //Display the outputs
    cout<<"You need $"<<insur<<" of insurance.";
    
    //Exit stage right or left!
    return 0;
}