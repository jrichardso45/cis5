/* 
 * File:   main.cpp
 * Author: Jessica Richardson
 * Created on: March 30, 2020; 08:30 PM
 * Purpose:  Template
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
    string Earth,Fire,Water,Air,
        Aries,Taurus,Gemini,Cancer,
        Leo,Virgo,Libra,Scorpio,
        Sagittarius,Capricorn,Aquarius,Pisces,
        zod1,zod2,type1,type2;
    
    //Initialize or input i.e. set variable values
    cout<<"Horoscope Program which examines compatible signs.\n"
        "Input 2 signs."<<endl;
    cin>>zod1>>zod2;
    
    //Map inputs -> outputs
    if(zod1=="Aries" || zod1=="Leo" || zod1=="Sagittarius")
    {
        type1="Fire";
    }
    else if(zod1=="Taurus" || zod1=="Virgo" || zod1=="Capricorn")
    {
        type1="Earth";
    }
    else if(zod1=="Gemini" || zod1=="Libra" || zod1=="Aquarius")
    {
        type1="Air";
    }
    else if(zod1=="Cancer" || zod1=="Scorpio" || zod1==Pisces)
    {
        type1="Water";
    }
    
    if(zod2=="Aries" || zod2=="Leo" || zod2=="Sagittarius")
    {
        type2="Fire";
    }
    else if(zod2=="Taurus" || zod2=="Virgo" || zod2=="Capricorn")
    {
        type2="Earth";
    }
    else if(zod2=="Gemini" || zod2=="Libra" || zod2=="Aquarius")
    {
        type2="Air";
    }
    else if(zod2=="Cancer" || zod2=="Scorpio" || zod2=="Pisces")
    {
        type2="Water";
    }

    if(type1=="Fire")
    {   
        if(type2=="Fire")
        {
            cout<<zod1<<" and "<<zod2<<" are compatible "<<type2<<" signs.";
        }
        else
        {
            cout<<zod1<<" and "<<zod2<<" are not compatible signs.";
        }
    }
    else if(type1=="Earth")
    {   
        if(type2=="Earth")
        {
            cout<<zod1<<" and "<<zod2<<" are compatible "<<type2<<" signs.";
        }
        else
        {
            cout<<zod1<<" and "<<zod2<<" are not compatible signs.";
        }
    }
    else if(type1=="Water")
    {   
        if(type2=="Water")
        {
            cout<<zod1<<" and "<<zod2<<" are compatible "<<type2<<" signs.";
        }
        else
        {
            cout<<zod1<<" and "<<zod2<<" are not compatible signs.";
        }
    }
    else if(type1=="Air")
    {   
        if(type2=="Air")
        {
            cout<<zod1<<" and "<<zod2<<" are compatible "<<type2<<" signs.";
        }
        else
        {
            cout<<zod1<<" and "<<zod2<<" are not compatible signs.";
        }
    }
    else
    {
        cout<<"Invalid Zodiac";
    }
    
    //Display the outputs
    
    
    //Exit stage right or left!
    return 0;
}