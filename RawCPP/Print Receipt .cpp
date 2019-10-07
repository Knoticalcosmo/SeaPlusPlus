/*
 *  Author: Jon Stoneman
 *  Class:  CSCI 140
 *  Assignment: Week 2, program 1
 *  Program Description:
 *      This program displays an amount of text
 *      and to organize it accordingly
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Variables and setup
    cout.setf(ios::fixed); //These are for setting up precision
    cout.setf(ios::showpoint);
    int space = 15;
    int tripleSpace = 3 * space;
    
    //Header Section
    cout << "===================================================" << endl;
    cout << endl;                                            // i just waned a space before the text to make it less cluttered
    cout << "Company:" << setw(tripleSpace - 5) << "Al Law care" << endl;
    cout << "Month:  " << setw(tripleSpace - 5) << "March 2018" << endl;    // i made this 16 so that it would line up with company
    cout << endl;
    cout << "===================================================" << endl;
    //Information on work
    
    cout << setw(tripleSpace) << "Total" << endl;                                           // i like spaces
    cout << setw(space) << "Service" << setw(space) << "Number"  << setw(space) << "Revenue" << endl;
    cout << "--------------------------------------------------" << endl;
    //Work Values
    
    cout << setw(space) << "Mow Lawn" << setw(space) << 200 << setw(space) << setprecision(2) << 4000.00 << endl;
    cout << setw(space) << "Fertilize" << setw(space) << 39 << setw(space) << setprecision(2) << 885.59 << endl;
    cout << setw(space) << "Trim Bushes" << setw(space) << 52 << setw(space) << setprecision(2) << 917.65 << endl;
    cout << setw(space) << "Remove Tree" << setw(space) << 2 << setw(space) << setprecision(2) << 199.50 << endl;
    //end of work values
    cout << endl;
    cout << "===================================================" << endl;
    cout << endl;
    //end of "table"
    
}