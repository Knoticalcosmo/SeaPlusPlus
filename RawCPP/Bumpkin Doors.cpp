/*
 *  Author: Jon Stoneman
 *  Class:  CSCI 140
 *  Assignment: Week 4, program 1
 *  Program Description:
 *      This program takes various elemnts (such as height of bumpkins)
 *      and uses these elements to tell bumpkins how to go through doors
 * 
 *      Note: i will be using inches as my internal measurements
 */

// inporting libraries
#include <iostream>
#include <iomanip>

//Misc setup
using namespace std;

//Variables
float bumpHeight = 0;
char bumpUnit = 'a';
float doorHeight = 0;
char doorUnit = 'a';
bool validInput = 0;

int main()
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);

    //Welcome message
    cout << "Welcome to the bumpkin door program" << endl << endl;
    
    //Asks for bumpkin height
    do
    {
        cout << "Please enter the height of the bumpkin first and then state the unit" << endl;
        cout << "(i for inches, f for feet, y for yards, c for centimeters and m for meters)" << endl;
        cin >> bumpHeight >> bumpUnit;
        
        if (bumpHeight > 0)
        {
            switch (bumpUnit)
            {
                case 'i':
                    bumpHeight = bumpHeight * 1;
                    validInput = 1;
                    break;
                case 'f':
                    bumpHeight = bumpHeight * 12;
                    validInput = 1;
                    break;
                case 'y':
                    bumpHeight = bumpHeight * 36;
                    validInput = 1;
                    break;
                case 'c':
                    bumpHeight = bumpHeight / 2.54;
                    validInput = 1;
                    break;
                case 'm':
                    bumpHeight = bumpHeight * 100 / 2.54;
                    validInput = 1;
                    break;
                default:
                    validInput = 0;
                    break;
            };   
        };
        
    }while (validInput = 0);
    
    //resets the validInput bool for the door
    validInput = 1;
    
    //prompt for the door's height and unit
    do
    {
        cout << "Please enter the height of the door first and then state the unit" << endl;
        cout << "(i for inches, f for feet, y for yards, c for centimeters and m for meters)" << endl;
        cin >> doorHeight >> doorUnit;
        
        if (doorHeight > 0)
        {
            switch (doorUnit)
            {
                case 'i':
                    doorHeight = doorHeight * 1;
                    validInput = 1;
                    break;
                case 'f':
                    doorHeight = doorHeight * 12;
                    validInput = 1;
                    break;
                case 'y':
                    doorHeight = doorHeight * 36;
                    validInput = 1;
                    break;
                case 'c':
                    doorHeight = doorHeight / 2.54;
                    validInput = 1;
                    break;
                case 'm':
                    doorHeight = doorHeight * 100 / 2.54;
                    validInput = 1;
                    break;
                default:
                    validInput = 0;
                    break;
            };
        };
        
    }while (validInput = 0);
    
    //this part is for calculating how you are supposed to go through the door
    if (doorHeight > (bumpHeight * 1.25))
    {
        cout << "dang, that is a big door. better get your stilts" << endl;                 //stilts
    }
    else if ((doorHeight <= (bumpHeight * 1.25)) && (doorHeight > (bumpHeight * 1.05)))
    {
        cout << "Just walk through, you'll fit" << endl;                                    //Walk
    }
    else if ((doorHeight <= (bumpHeight * 1.05)) && (doorHeight > (bumpHeight * 0.65)))
    {
        cout << "Make like a duck and quack! wait... other way around" << endl;             //Duck
    }
    else if ((doorHeight <= (bumpHeight * 0.65)) && (doorHeight > (bumpHeight * 0.40)))
    {
        cout << "you're gonna need to crawl through this one" << endl;                      //Crawl
    }
    else if ((doorHeight <= (bumpHeight * 0.40)) && (doorHeight > (bumpHeight * 0.25)))
    {
        cout << "Well this one's a stretch, time to do the limbo" << endl;                  //Limbo
    }
    else
    {
        cout << "there is no possible way this will work" << endl;                          //Impossibilities
    };
    
    //cout << setprecision(2) << bumpHeight << " " << doorHeight << endl; // testing purposes
}