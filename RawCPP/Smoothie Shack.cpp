/*
 *  Author: Jon Stoneman
 *  Class:  CSCI 140
 *  Assignment: Week #, program 1
 *  Program Description:
 *      Mama Maui's Smoothie Stand product selection
 *      you choose a flavor and size 
 */

#include <iostream>
#include <iomanip>
using namespace std;

void flavors();
void sizes();
float order();
bool repeat();
string flavorName(char);

float totalCost = 0;

//main function
int main()
{
    bool exit = false;
    bool dispTotal = false;
    int choice = 0;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    do
    {
        cout << "Welcome to Mama Maui's Smoothie Stand!" << endl;
        cout << "1) Look at flavors" << endl;
        cout << "2) Look at sizes" << endl;
        cout << "3) order (recommended you look at flavors and sizes before ordering)" << endl;
        cout << "4) exit" << endl;
        cin >> choice;
        switch (choice)
        {
            case 1:
                flavors();
                break;
            case 2:
                sizes();
                break;
            case 3:
                totalCost = totalCost + order();
                exit = repeat();
                dispTotal = true;
                break;
            case 4:
                exit = true;
                break;
            default:
                cout << "Invalid Option" << endl;
                break;
        }
        
    } while(exit == false);
    if (dispTotal == true)
    {
        cout << "Your total cost is $" << setprecision(2) << totalCost << ", Have a nice day!" << endl;

    }
}

//displays flavor choices
void flavors()
{
    cout << endl;
    cout << "flavors:" << endl;
    cout << "c - " << flavorName('c') << endl;
    cout << "m - " << flavorName('m') << endl;
    cout << "b - " << flavorName('b') << endl;
    cout << "p - " << flavorName('p') << endl;
    cout << "s - " << flavorName('s') << endl;
    cout << endl;
}

//displays size choices
void sizes()
{
    cout << endl;
    cout << "Sizes:" << endl;
    cout << "c - Child  (6 oz in plastic cup) 5.00" << endl;
    cout << "s - Small  (4 oz) 3.50" << endl;
    cout << "m - Medium (6 oz) 5.00" << endl;
    cout << "l - Large  (8 oz) 6.50" << endl;
    cout << endl;
}

// the function for ordering
float order()
{
    char flavorChoice;
    bool validFlavor = false;
    char sizeChoice;
    float sizeCost;
    bool validSize = false;
    int numberOfDrinks = -1;
    string flavor;
    string size;
    float cost = 0;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    
    while (validFlavor == false)
    {
        cout << "What flavor?" << endl;
        cin >> flavorChoice;
        switch (flavorChoice)
        {
            case 'c':
            case 'm':
            case 'b':
            case 'p':
            case 's':
                flavor = flavorName(flavorChoice);
                validFlavor = true;
                break;
            default:
                cout << "Ivalid Flavor" << endl;
                validFlavor = false;
                break;
        };
    };
    while (validSize == false)
    {
        cout << "What size?" << endl;
        cin >> sizeChoice;
        switch (sizeChoice)
        {
            case 'c':
                size = "Child";
                sizeCost = 5;
                validSize = true;
                break;
            case 's':
                size = "Small";
                sizeCost = 3.5;
                validSize = true;
                break;
            case 'm':
                size = "Medium";
                sizeCost = 5.25;
                validSize = true;
                break;
            case 'l':
                size = "Large";
                sizeCost = 6.5;
                validSize = true;
                break;
            default:
                cout << "Ivalid Size" << endl;
                validSize = false;
                break;
        }   
    };
    while (numberOfDrinks < 0)
    {
        cout << "How many drinks?" << endl;
        cin >> numberOfDrinks;
    };
    cost = sizeCost * numberOfDrinks;
    cout << "you ordered " << numberOfDrinks << " " << size << " " << flavor << " smoothie(s) for $" << setprecision(2) << cost << endl;
    return cost;
}

//Returns the name of the flavor given a char value
string flavorName(char i)
{
    switch (i)
    {
        case 'c':
            return "Cherry";
            break;
        case 'm':
            return "Mango";
            break;
        case 'b':
            return "Blueberry";
            break;
        case 'p':
            return "Pineapple";
            break;
        case 's':
            return "Strawberry";
            break;
        default:
            return "invalid";
            break;
    }
}

// asks to repeat the function
bool repeat()
{
    bool valid = false;
    while (valid == false)
    {
        char choice;
        cout << "Would you like to place another order?" << endl;
        cin >> choice;
        switch (choice)
        {
            case 'y':
                return false;
                valid = true;
                break;
            case 'n':
                return true;
                valid = true;
                break;
            default:
                valid = false;
                break;
        };
    };
}