/* 
 * File:   main.cpp
 * Author: Jessica Richardson
 * Created on: March 17, 2020; 01:30 PM
 * Purpose:  Cookies
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
    int eaten,calps,cpserv,bagamnt,servpb,calpc,totcal;
    
    //Initialize or input i.e. set variable values
    bagamnt=40;
    servpb=10;
    calps=300;
    
    
    //Map inputs -> outputs
    cout<<"Calorie Counter\nHow many cookies did you eat?\n";
    cin>>eaten;    
    cpserv=bagamnt/servpb;
    calpc=calps/cpserv;
    totcal=eaten*calpc;
    
    //Display the outputs
    cout<<"You consumed "<<totcal<<" calories.";
            
    //Exit stage right or left!
    return 0;
}