/* 
 * File:   main.cpp
 * Author: Jessica Richardson
 * Created on: March 29, 2020; 09:00 PM
 * Purpose:  RPS
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
    char pla1,pla2;
    
    //Initialize or input i.e. set variable values
    cout<<"Rock Paper Scissors Game\nInput Player 1 and Player 2 Choices"<<endl;
    cin>>pla1>>pla2;
    
    //Map inputs -> outputs
    switch (pla1)
    {
        case'r':
        case'R':
            switch (pla2)
            {
                case'r':
                case'R':
                    cout<<"Nobody wins.";
                    break;
                case'p':
                case'P':
                    cout<<"Paper covers rock.";
                    break;
                case's':
                case'S':
                    cout<<"Rock breaks scissors.";
                    break;
            }      
            break;
        case'p':
        case'P':
            switch (pla2)
            {
                case'r':
                case'R':
                    cout<<"Paper covers rock.";
                    break;
                case'p':
                case'P':
                    cout<<"Nobody wins.";
                    break;
                case's':
                case'S':
                    cout<<"Scissors cuts paper.";
                    break;
            }
            break;
        case's':
        case'S':
            switch (pla2)
            {
                case'r':
                case'R':
                    cout<<"Rock breaks scissors.";
                    break;
                case'p':
                case'P':
                    cout<<"Scissors cuts paper.";
                    break;
                case's':
                case'S':
                    cout<<"Nobody wins.";
                    break;
            }
            break;
    }
    
    //Display the outputs

    
    //Exit stage right or left!
    return 0;
}