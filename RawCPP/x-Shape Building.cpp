/*
 *  Author: Jon Stoneman
 *  Class:  CSCI 140
 *  Assignment: Week 5, program 1
 *  Program Description:
 *      This program takes in requests to build
 *      shapes of given shape and size
 */

#include <iostream>
using namespace std;

int main()
{
	
	bool exitProg = false;
	bool exitLoop = false;
	bool validChoice = false;
	bool validSize = false;
	int choice = 0;
	int size = 0;
	char block = '_';

    // introduction, only appears once
    cout << endl << "Welcome to Wonky Wacko's Wonderful Shape Maker!" << endl << endl;
    // a loop to contain the choices and menu
    do
    {
        // Program Menu
        cout << "What shape would you like to make today?" << endl;
        cout << "(1:square, 2:triangle, 0:exit)" << endl;
        cin >> choice;
        cout << endl;
        switch (choice)
        {
            //Square Building
            case 1:
                
                //Confimation of shape
                cout << "You chose to make a square." << endl << endl;
                do
                {
                    
                    //input for size
                    cout << "What size do you want your square?" << endl;
                    cout << "(1-25, 0:Back)" << endl;
                    cin >> size;
                    cout << endl << "you entered: " << size << endl << endl;
                    if ((size > 0) && (size <= 25))
                    {
                        //Shape choice
                        cout << "What shape would you like to make your square?" << endl;
                        cout << "(1:*, 2:#, 3:@, 0:Back)" << endl;
                        cin >> choice;
                        cout << endl;
                        switch (choice)
                        {
                            case 1:
                                block = '*';
                                validChoice = true;
                                validSize = true;
                                break;
                            case 2:
                                block = '#';
                                validChoice = true;
                                validSize = true;
                                break;
                            case 3:
                                block = '@';
                                validChoice = true;
                                validSize = true;
                                break;
                            case 0:
                                validChoice = true;
                                validSize = false;
                                break;
                            default:
                                validChoice = false;
                                break;
                        }
                        
                        if (!(choice == 4))
                        {
                            for (int i = 0; i < size; i++)
                            {
                                for (int j = 0; j < size; j++)
                                {
                                    cout << block << " "; // the space is to make it look nicer
                                }
                                cout << endl;
                            }
                            cout << endl << "Here is your " << size << " X " << size << " square of " << block << endl;
                        }
                        
                    
                    }
                    else if (size > 25)
                    {
                        cout << size << " is too large" << endl;
                        validSize = false;
                    }
                    else if (size < 0)
                    {
                        cout << size << " is too small" << endl;
                        validSize = false;
                    }
                    else if (size == 0)
                    {
                        validSize = true;
                    };
                    
                }while (validSize == false);
                break;
                
            //Triangle Building
            case 2:
                
                //Confimation of shape
                cout << "You chose to make a triangle." << endl << endl;
                do
                {
                    
                    //input for size
                    cout << "What size do you want your triangle?" << endl;
                    cout << "(1-25, 0:Back)" << endl;
                    cin >> size;
                    cout << endl << "you entered: " << size << endl << endl;
                    if ((size > 0) && (size <= 25))
                    {
                        //Shape choice
                        cout << "What shape would you like to make your triangle?" << endl;
                        cout << "(1:*, 2:#, 3:@, 0:Back)" << endl;
                        cin >> choice;
                        cout << endl;
                        switch (choice)
                        {
                            case 1:
                                block = '*';
                                validChoice = true;
                                validSize = true;
                                break;
                            case 2:
                                block = '#';
                                validChoice = true;
                                validSize = true;
                                break;
                            case 3:
                                block = '@';
                                validChoice = true;
                                validSize = true;
                                break;
                            case 0:
                                validChoice = true;
                                validSize = false;
                                break;
                            default:
                                validChoice = false;
                                break;
                        }
                        
                        if (!(choice == 4))
                        {
                            for (int i = 0; i < size; i++)
                            {
                                for (int j = 0; j < i; j++)
                                {
                                    cout << block << " ";
                                }
                                cout << endl;
                            }
                            cout << endl << "Here is your triangle of " << block << endl;
                        }
                        
                    
                    }
                    else if (size > 25)
                    {
                        cout << size << " is too large" << endl;
                        validSize = false;
                    }
                    else if (size < 0)
                    {
                        cout << size << " is too small" << endl;
                        validSize = false;
                    }
                    else if (size == 0)
                    {
                        validSize = true;
                    };
                    
                }while (validSize == false);
                break;
                
            //Exit
            case 0:
                cout << "Thanks for making shapes" << endl << endl;
                exitProg = true;
                break;
            //Invalid
            default:
                break;
        }
    } while(exitProg == false);
}
