/* 
 * File:   main.cpp
 * Author: Jessica Richardson
 * Created on: March 31, 2020; 08:50 PM
 * Purpose:  Lab 4 Hw Asst 3 Menu
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
    //Variable Declarations
    char choice;

    //Display Menu
    cout<<"Lab 4: Assignment 3 Menu"<<endl;
    cout<<"Type 1 for Gaddis Books Problem"<<endl;
    cout<<"Type 2 for Gaddis Bank Charges Problem"<<endl;
    cout<<"Type 3 for Gaddis Race Problem"<<endl;
    cout<<"Type 4 for Gaddis ISP Problem"<<endl;
    cout<<"Type 5 for Gaddis Sorting Names Problem"<<endl;
    cout<<"Type 6 for Savitch Rock Paper Scissors Problem"<<endl;
    cout<<"Type 7 for Savitch Zodiac Compatibility Problem"<<endl;
    cout<<"Type 8 for Savitch Roman Numeral Conversion Problem"<<endl;
    cin>>choice;
    
    switch(choice){
        case '1':{
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
            break;
        }
        
        case '2':{
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
            break;
        }
        
        case '3':{
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
            break;
        }
        
        case '4':{
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
            break;
        }
        
        case '5':{
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
            break;
        }
        
        case '6':{
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
            break;
        }
        
        case '7':{
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
            break;
        }
        
        case '8':{
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
            break;
        }
        
        default:
            cout<<"Not an Option"<<endl;
    }

    //Clean Up
    
    //Exit stage right or left!
    return 0;
}