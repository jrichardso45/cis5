/* 
 * File:   main.cpp
 * Author: Jessica Richardson
 * Created on: March 29, 2020; 11:45 AM
 * Purpose:  Sort Names
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
    string name1,name2,name3;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"Sorting Names\n"<<"Input 3 names"<<endl;
    cin>>name1>>name2>>name3;
    
    //Display the outputs
    if(name3>name2 && name2>name1)
    {
        cout<<name1<<endl<<name2<<endl<<name3;
    }
    else if(name1>name2 && name3<name2)
    {
        cout<<name3<<endl<<name2<<endl<<name1;
    }
    else if(name1<name2 && name3<name1)
    {
        cout<<name3<<endl<<name1<<endl<<name2;
    }
    else if(name2<name1 && name1<name3)
    {
        cout<<name2<<endl<<name1<<endl<<name3;
    }
    else if(name3>name2 && name3<name1)
    {
        cout<<name2<<endl<<name3<<endl<<name1;
    }
    else if(name1<name3 && name3<name2)
    {
        cout<<name1<<endl<<name3<<endl<<name2;
    }
    else
    {
        cout<<"ERROR"<<endl;
    }
    
    //Exit stage right or left!
    return 0;
}