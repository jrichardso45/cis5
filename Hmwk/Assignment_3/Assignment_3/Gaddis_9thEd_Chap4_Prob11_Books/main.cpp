/* 
 * File:   main.cpp
 * Author: Jessica Richardson
 * Created on: March 29, 2020; 05:00 PM
 * Purpose:  Books
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
    int books,points;
    
    //Initialize or input i.e. set variable values
    cout<<"Book Worm Points\nInput the number of books purchased this month."<<endl;
    cin>>books;
    
    //Map inputs -> outputs
    if(books>0)
    {
        if(books==1)
        {
            points=5;
        }
        else if(books==2)
        {
            points=15;
        }
        else if(books==3)
        {
            points=30;
        }
        else if(books>=4)
        {
            points=60;
        }
    }
    else
    {
        points=0;
    }
    
    //Display the outputs
    cout<<"Books purchased =  "<<books<<endl
        <<"Points earned   = "<<points;
    
    //Exit stage right or left!
    return 0;
}