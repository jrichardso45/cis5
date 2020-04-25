/* 
 * File:   main.cpp
 * Author: Jessica Richardson
 * Created on: March 29, 2020; 05:13 PM
 * Purpose:  Bank Charges
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
    float bal,checks,chefee,mofee,lowb,newb;
    
    //Initialize or input i.e. set variable values
    cout<<"Monthly Bank Fees\n"<<
        "Input Current Bank Balance and Number of Checks"<<endl;
    cin>>bal>>checks;
    
    //Map inputs -> outputs
    if(checks<0)
    {
        cout<<"ERROR"<<endl;
    }
    else{
        if(bal<0)
        {
            cout<<"URGENT: This account is overdrawn!"<<endl;
        }
        else{
            if(checks<20 && checks>=0)
            {
                chefee=0.10*checks;
            }
            if(checks>=20 && checks<=39)
            {
                chefee=0.08*checks;
            }
            if(checks>=40 && checks<=59)
            {
                chefee=0.06*checks;
            }
            if(checks>=60)
            {
                chefee=0.04*checks;
            }
        }
    }
    if(bal-chefee<400)
    {
        lowb=15;
    }
    else
    {
        lowb=0;
    }
    
    mofee=10;
    newb=bal-chefee-mofee-lowb;
    
    //Display the outputs
    cout<<fixed<<setprecision(2)
        <<"Balance     $   "<<bal<<endl
        <<"Check Fee   $     "<<chefee<<endl
        <<"Monthly Fee $    "<<mofee<<endl
        <<"Low Balance $    "<<lowb<<endl
        <<"New Balance $    "<<newb;
    
    //Exit stage right or left!
    return 0;
}