/* 
 * File:   main.cpp
 * Author: Jessica Richardson
 * Created on: March 17, 2020; 10:10 PM
 * Purpose:  Diet Coke
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
    float weight,mass,ratio,letsm,massm,can,masssw,cps,amnt;
    
    //Initialize or input i.e. set variable values
    massm=35;
    letsm=5;
    ratio=letsm/massm;
    mass=0.0022*weight;
    can=350;
    masssw=cps*can;
    cps=.0001f;
    
    //Map inputs -> outputs
    cout<<"Program to calculate the limit of Soda Pop Consumption."
        "\nInput the desired dieters weight in lbs."<<endl;
    cin>>weight;
    amnt=ratio*mass/masssw;
    
    //Display the outputs
    cout<<"The maximum number of soda pop cans\n"
            "which can be consumed is "<<amnt<<" cans";
    
    //Exit stage right or left!
    return 0;
}