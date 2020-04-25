/* 
 * File:   main.cpp
 * Author: Jessica Richardson
 * Created on: March 17, 2020; 01:30 PM
 * Purpose:  Average
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
    float avrg,scr01,scr02,scr03,scr04,scr05;
    
    //Initialize or input i.e. set variable values
    cout<<"Input 5 numbers to average."<<endl;
    cin>>scr01;
    cin>>scr02;
    cin>>scr03;
    cin>>scr04;
    cin>>scr05;
    
    //Map inputs -> outputs
    avrg=(scr01+scr02+scr03+scr04+scr05)/5;
            
    //Display the outputs
    cout<<"The average = "<<fixed<<setprecision(1)<<avrg;
            
    //Exit stage right or left!
    return 0;
}