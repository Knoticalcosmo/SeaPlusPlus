/*
 *  Author: Jon Stoneman
 *  Class:  CSCI 140
 *  Assignment: Week 8, program 1
 *  Program Description:
 *      Magic Mark's Master Magician Password Machine
 *      - gets passwords from a text document, chooses a random passphrase
 *        and then prompts a response to the passphrase (number of letters
 *        in the passphrase)
 */

/* Documents needed:
 *      input.txt
 */

//included libraries
#include <iostream> // for inputing and outputing to the console
#include <ctime>    // for seeding the random function
#include <cstdlib>  // for random number generation
#include <string>   // for determining string lengths
#include <fstream>  // for inputing passphrases
using namespace std;

// Function prototypes
void fillLists();
bool opening();
bool questions();

// Global variables
const int INPUTAMOUNT = 20;
string word[INPUTAMOUNT]; // this is out here because i reference it a bunch. also passing an array through reference does not seem to like to work with me.

// Functions
int main()          // The Main Function
{
    srand(time(0));
    fillLists();                // Fills up word[]
    while(opening() == false)   // keeps the function opening() in a loop until it returns true
    {}
}

void fillLists()    // Fills in the array word[] with files from input.txt (should be 20 words)
{
    int num[INPUTAMOUNT];
    ifstream instream;
    instream.open("input.txt");
    for (int i=0; i<INPUTAMOUNT; i++)
    {
        instream >> num[i];
        instream >> word[i];
    }
}

bool opening()      // Gives a greeting menu offering to enter a passphrase or exit
{
    int choice;
    cout <<  "What would you like to do?" << endl;
    cout << " 1:Answer Password" << endl;
    cout << " 2:Exit" << endl;
    cout << " >";
    cin >> choice;
    cout << endl;
    switch (choice)
    {
        case 1:
            return questions();
            break;
        case 2:
            return true;
            break;
        default:
            return false;
            break;
    }
}

bool questions()    // Generates a passphrase from the array word[] and asks for the secret password
{
    int randNum = (rand() % INPUTAMOUNT);
    int password;
    cout << "your passphrase is " << word[randNum] << endl;
    cout << "Password: ";
    cin >> password;
    if (password == word[randNum].length())
    {
        cout << "correct Password, Welcome Master Magician!" << endl << endl;
        return true;
    }
    else
    {
        cout << "Incorrect Password!" << endl << endl;
        return false;
    }
}