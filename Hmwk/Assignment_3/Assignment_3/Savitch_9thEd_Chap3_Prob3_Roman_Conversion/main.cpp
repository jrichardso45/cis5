/* 
 * File:   main.cpp
 * Author: Jessica Richardson
 * Created on: March 29, 2020; 01:30 PM
 * Purpose:  Roman Numeral Conversion
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
    int no1,no5,no10,no50,no100,no500,no1000,year;
    string ro1,ro10,ro100,ro1000;
    
    //Initialize or input i.e. set variable values
    cout<<"Arabic to Roman numeral conversion.\n"
            <<"Input the integer to convert."<<endl;
    cin>>year;
    
    no1=(year)%10;
    no10=(year/10)%10;
    no100=(year/100)%10;
    no1000=(year/1000)%10;
    no5=no1/5%10;
    no50=(no10/5)%10;
    no500=(no100/5)%10;
    
    //Map inputs -> outputs
    
    if(year>=1000 && year<=3000)
    {
        if(no1==0)
        {
            ro1="";
        }
        else if(no1==1)
        {
            ro1="I";
        }
        else if(no1==2)
        {
            ro1="II";
        }
        else if(no1==3)
        {
            ro1="III";
        }
        else if(no1==4)
        {
            ro1="IV";
        }
        else if(no1==5)
        {
            ro1="V";
        }
        else if(no1==6)
        {
            ro1="VI";
        }
        else if(no1==7)
        {
            ro1="VII";
        }
        else if(no1==8)
        {
            ro1="VIII";
        }
        else if(no1==9)
        {
            ro1="IX";
        }
        
        if(no10==0)
        {
            ro10="";
        }
        else if(no10==1)
        {
            ro10="X";
        }
        else if(no10==2)
        {
            ro10="XX";
        }
        else if(no10==3)
        {
            ro10="XXX";
        }
        else if(no10==4)
        {
            ro10="XL";
        }
        else if(no10==5)
        {
            ro10="L";
        }
        else if(no10==6)
        {
            ro10="LX";
        }
        else if(no10==7)
        {
            ro10="LXX";
        }
        else if(no10==8)
        {
            ro10="LXXX";
        }
        else if(no10==9)
        {
            ro10="XC";
        }
        
        if(no100==0)
        {
            ro100="";
        }
        else if(no100==1)
        {
            ro100="C";
        }
        else if(no100==2)
        {
            ro100="CC";
        }
        else if(no100==3)
        {
            ro100="CCC";
        }
        else if(no100==4)
        {
            ro100="CD";
        }
        else if(no100==5)
        {
            ro100="D";
        }
        else if(no100==6)
        {
            ro100="DC";
        }
        else if(no100==7)
        {
            ro100="DCC";
        }
        else if(no100==8)
        {
            ro100="DCCC";
        }
        else if(no100==9)
        {
            ro100="CM";
        }
        
        if(no1000==1)
        {
            ro1000="M";
        }
        else if(no1000==2)
        {
            ro1000="MM";
        }
        else if(no1000==3)
        {
            ro1000="MMM";
        }
        
        cout<<year<<" is equal to "<<ro1000<<ro100<<ro10<<ro1;
    }
    else
    {
        cout<<year<<" is Out of Range!";
    }
    
    //Display the outputs
    
    
    //Exit stage right or left!
    return 0;
}