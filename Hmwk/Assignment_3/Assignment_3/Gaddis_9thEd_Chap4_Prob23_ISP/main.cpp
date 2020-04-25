/* 
 * File:   main.cpp
 * Author: Jessica Richardson
 * Created on: March 29, 2020; 08:30 PM
 * Purpose:  ISP
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
    //Set the random number seed
    
    //Declare Variables
    char choice;
    int hours;
    float price,bill;
    
    //Initialize or input i.e. set variable values
    cout<<"ISP Bill\nInput Package and Hours"<<endl;
    cin>>choice>>hours;
    
    //Map inputs -> outputs
    switch(choice)
    {
        case'a':
        case'A':
            if(hours>10 && hours<744)
            {
                price=9.95+2*(hours-10);
            }
            else if(hours<=10 && hours>0)
            {
                price=9.95f;
            }
            else
            {
                cout<<"Invalid input."<<endl;
            }
            break;
        case'b':
        case'B':
            if(hours>20 && hours<744)
            {
                price=14.95+1*(hours-20);
            }
            else if(hours<=20 && hours>0)
            {
                price=14.95f;
            }
            else
            {
                cout<<"Invalid input."<<endl;
            }
            break;
        case'c':
        case'C':
            if(hours>0 && hours<744)
            {
                price=19.95f;
            }
            else
            {
                cout<<"Invalid input."<<endl;
            }
            break;
        default:
            cout<<"That is an invalid choice."<<endl;
    }
    
    //Display the outputs
    cout<<"Bill = $ "<<fixed<<setprecision(2)<<price;
    
    //Exit stage right or left!
    return 0;
}