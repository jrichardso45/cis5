/* 
 * File:   main.cpp
 * Author: Jessica Richardson
 * Created on: March 29, 2020; 06:00 PM
 * Purpose:  Race
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
    int time1,time2,time3;
    
    //Initialize or input i.e. set variable values
    cout<<"Race Ranking Program\nInput 3 Runners"<<endl
        <<"Their names, then their times"<<endl;
    cin>>name1>>time1>>name2>>time2>>name3>>time3;
    
    //Map inputs -> outputs
    setw(5);
    if(time1<time2 && time2<time3)
    {
        cout<<name1<<setw(6)<<time1<<endl
            <<name2<<setw(6)<<time2<<endl
            <<name3<<setw(6)<<time3;
    }
    else if(time3<time2 && time2<time1)
    {
        cout<<name3<<setw(6)<<time3<<endl
            <<name2<<setw(6)<<time2<<endl
            <<name1<<setw(6)<<time1;
    }
    else if(time2<time1 && time1<time3)
    {
        cout<<name2<<setw(6)<<time2<<endl
            <<name1<<setw(6)<<time1<<endl
            <<name3<<setw(6)<<time3;
    }
    else if(time3<time1 && time1<time2)
    {
        cout<<name3<<setw(6)<<time3<<endl
            <<name1<<setw(6)<<time1<<endl
            <<name2<<setw(6)<<time2;
    }
    else if(time2<time3 && time3<time1)
    {
        cout<<name2<<setw(6)<<time2<<endl
            <<name3<<setw(6)<<time3<<endl
            <<name1<<setw(6)<<time1;
    }
    else if(time1<time3 && time3<time2)
    {
        cout<<name1<<setw(6)<<time1<<endl
            <<name3<<setw(6)<<time3<<endl
            <<name2<<setw(6)<<time2;
    }
    
    //Display the outputs

    
    //Exit stage right or left!
    return 0;
}