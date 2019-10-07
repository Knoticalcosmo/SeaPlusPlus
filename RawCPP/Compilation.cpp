#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;

//Function prototypes
	//Divides the menu and other sub functions
	void block();
	//Provides information on each program
	void info();
	//the random number generator functions
	void random();
	void rng(int [], int, int);
	void rngToFile(int [], int);
	void rngToConsole(int [], int);
	//String reversing function
	void reverse();
	//chips game
	void chips();
	int initGame();
	int askMove(bool , int );  
	bool isMoveLegal(int , int );
	void declareWinner(bool ); 
	//shape maker
	void shapes();
	
//global variables
	const int ARRAY_SIZE = 100;
	string player1;
	string player2;

//Main Function
int main()
{
	cout << "Welcome to Jon's Portfolio of programs, in one program!" << endl << endl;
	bool exit = false;
	while(exit == false)
	{
		cin;
		int choice;
		srand(time(0));
		cout << "What would you like to do?" << endl;
		cout << "1:Information" << endl;
		cout << "2:Word Reverser" << endl;
		cout << "3:Random Number Generator" << endl;
		cout << "4:Chips Game" << endl;
		cout << "5:Shape Maker" << endl;
		cout << "0:Exit" << endl;
		cin >> choice;
		switch (choice)
		{
			case 0:
				exit = true;
				break;
			case 1:
				block();
				info();
				block();
				break;
			case 2:
				block();
				reverse();
				block();
				break;
			case 3:
				block();
				random();
				block();
				break;
			case 4:
				block();
				chips();
				block();
				break;
			case 5:
				block();
				shapes();
				block();
				break;
			default:
				break;
					
		}
	};

	
}

//Functions For random Number Generation
void random()
{
	
	int choice;
	int size = 0;
	int number = 0;
	while((size <= 0) || (size > 100))
	{
		cout << "how many numbers do you want to generate? (1-100)" << endl;
		cin >> size;
	}
	while((number <= 0))
	{
		cout << "what is the max number you want to generate?" << endl;
		cin >> number;
	}
	int test[ARRAY_SIZE];
	rng(test,size,number);
	cout << "RNG successful" << endl;
	bool exit = false;
	while(exit == false)
	{
		cout << "where do you want to output?" << endl;
		cout << "1:Console" << endl;
		cout << "2:File" << endl;
		cout << "3:Cancel" << endl;
		cin >> choice;
		switch (choice)
		{
			case 1:
				rngToConsole(test,size);
				exit = true;
				break;
			case 2:
				rngToFile(test,size);
				exit = true;
				break;
			case 3:
				exit = true;
				break;
			default:
				break;
		}
	}
	
}
void rng(int array[], int size, int number)
{
	for (int i = 0; i < size; i++)
	{
		array[i] = ((rand() % number) + 1);
	}
}
void rngToFile(int array[],int size)
{
	ofstream output;
	output.open("Random.txt");
	for (int i = 0; i < size; i++)
	{
		output << array[i] << endl;
	}
	output.close();
}
void rngToConsole(int array[],int size)
{
	cout << endl << "Your numbers are:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

//Function for reversing a string
void reverse()
{
	string input;
	int choice;
	string output = "";
	cout << "what word do you want to reverse?" << endl;
	cin >> input;
	int length = input.length();
	for (int i = (length-1) ; i>=0 ; i--)
	{
		output =output + input.at(i);
	}
	
	bool exit = false;
	cout << endl;
	while(exit == false)
	{
		cout << "where do you want to output?" << endl;
		cout << "1:Console" << endl;
		cout << "2:File" << endl;
		cout << "3:Cancel" << endl;
		cin >> choice;
		ofstream outputFile;
		switch (choice)
		{
			case 1:
				cout << endl << input << " backwards is " << output << endl;
				exit = true;
				break;
			case 2:
				outputFile.open("Reverse.txt");
				outputFile << input << " backwards is " << output << endl;
				exit = true;
				break;
			case 3:
				exit = true;
				break;
			default:
				break;
		}
		outputFile.close();
	}
}

//Shape maker
void shapes()
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

//Chips Game
void chips()  
{  
 // i added a little name input before hand
  cout << "Player 1, what is your name?" << endl;
  cin >> player1;
  cout << "Player 2, what is your name?" << endl;
  cin >> player2;

 // This variable keeps track of whose turn it is.  
  bool player1Turn = true;  
 // When true it is player 1's turn and when  
 // false it is player2's turn. 
 // will be set to true once the chips are gone.    
  bool gameOver = false;    
  int chipsInPile;  
  int chipsTaken; 
  chipsInPile = initGame(); 
  while (gameOver == false)    
  {  
      chipsTaken = askMove(player1Turn, chipsInPile); 
      chipsInPile = chipsInPile - chipsTaken; 
      if (chipsInPile == 0) 
      {            
    	  gameOver = true;  
          declareWinner(player1Turn);  
      }  
      else  
      {            
          cout << "There are " << chipsInPile << " chips left. " << endl << endl;  
          player1Turn = !player1Turn;  
   }    
}   
} 
 int initGame()  
{
	int chips = 0;
	bool valid = false;
	do
	{
		cout << "How many chips do you want to start out with? (anywhere between 2-100)" << endl;
		cin >> chips;
		if ((chips <= 100) && (chips >=2))
		{
			valid = true;
			return chips;
			
		}
		else
		{
			valid = false;
			cout << "Invalid Value, please try again" << endl;
		};
	}while(valid == false);
}
int askMove(bool player1Turn, int chipsInPile)  
{
	int chips;
	bool valid = false;
	if (player1Turn == true)
	{
		do
		{
			cout << player1 <<", How many chips do you want to take? (anywhere between 1-" << (chipsInPile + 1)/ 2 << ")" << endl;
			cin >> chips;
			if ((chips >= 1) && (chips <= (chipsInPile + 1)/ 2))
			{
				valid = true;
				return chips;
			}
			else
			{
				valid = false;
				cout << "Invalid Value, please try again" << endl;
			};
		}while (valid == false);
 
	}
	
	if (player1Turn == false)
	{
		do
		{
			cout << player2 << ", How many chips do you want to take? (anywhere between 1-" << (chipsInPile + 1)/ 2 << ")" << endl;
			cin >> chips;
			if ((chips >= 1) && (chips <= (chipsInPile + 1)/ 2))
			{
				valid = true;
				return chips;
			}
			else
			{
				valid = false;
				cout << "Invalid Value, please try again" << endl;
			};
		}while (valid == false);
 
	}
} 
bool isMoveLegal(int chipsTaken, int chipsInPile)  
{
	if ((chipsTaken > chipsInPile / 2) || (chipsTaken < 1))
	{
		return false;
	}
	else
	{
		return true;
	};
}
void declareWinner(bool player1Turn)  
{
	if (player1Turn == true)
	{
		cout << player1 << " took the last chip, so " << player2 << " wins!" << endl;
	}
	else if (player1Turn == false)
	{
		cout << player2 << " took the last chip, so " << player1 << " wins!" << endl;
	}
	else
	{
		cout << "No One Wins!" << endl;
	}
} 

//misc
void block()
{
	cout << endl << "---------------------------------------------------" << endl << endl;
}

void info()
{
	bool exit = false;
	while(exit == false)
	{
		cin;
		int choice;
		srand(time(0));
		cout << "What would you like information on?" << endl;
		cout << "1:Word Reverser" << endl;
		cout << "2:Random Number Generator" << endl;
		cout << "3:Chips Game" << endl;
		cout << "4:Shape Maker" << endl;
		cout << "0:return" << endl;
		cin >> choice;
		switch (choice)
		{
			case 0:
				exit = true;
				break;
			case 1:
				block();
				cout << "Takes a given word and repeats it backwards." << endl;
				cout << "Also can print to a .txt file or to the console." << endl;
				block();
				break;
			case 2:
				block();
				cout << "prompts for a few parameters to generate random numbers." << endl;
				cout << "Also can print to a .txt file or to the console." << endl;
				block();
				break;
			case 3:
				block();
				cout << "A simple two player game where you start with" << endl;
				cout << "a number of chips and you slowly deplete the" << endl;
				cout << "pile until some one takes the last chip, in which" << endl;
				cout << "case they lose" << endl;
				block();
				break;
			case 4:
				block();
				cout << "builds shapes based on inputs" << endl;
				block();
				break;
			default:
				break;
					
		}
	};
}
