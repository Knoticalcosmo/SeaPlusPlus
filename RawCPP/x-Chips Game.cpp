/*
Project 2: the chips game
*/
#include <iostream> 

using namespace std; 

//Function prototypes
int initGame();
int askMove(bool , int );  
bool isMoveLegal(int , int );
void declareWinner(bool ); 

// Names
string player1;
string player2;

int main()  
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
  return 0; 
} 
////////////////////////////////////////////////////////////////////// ////// 
/* This function is called by the main program. 
It asks the user how many chips are in the pile at the start of the game.
 If  the user enters a number less than 2 or greater than 100 it will tell him that  
he must enter a number between 2 and 100. 
Once a valid number of chips is entered the function will return the number of  
chips. */ 
////////////////////////////////////////////////////////////////////// ////
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
////////////////////////////////////////////////////////////////////// 
/* This function is called by the main program. 
It asks the correct player how many chips they would 
like to take. Then it calls is move legal which determines if the proposed 
move is legal. If the proposed move is NOT legal then it will print  
out a message saying the move is not legal and it will ask repeatedly until  the player enters a legal move. 
Once a legal move is entered this function returns the number of chips taken.  
*/  /////////////////////////////////////////////////////////////////////////
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

////////////////////////////////////////////////////////////////////// //// 
  /* This function is called by the ask move function. 
It looks at the number of chips in the pile and the number of chips the  
player wants to take and determines if the proposed move is legal. 
If  the proposed move is legal this function will return true and if the  
proposed move is not legal this function will return false. 
Remember, a player must take at least 1 chip and no more than half  
of the chips remaining in the pile unless the pile has only one chip  
left in which case the only legal move is to take the one remaining chip. 
 */ 
////////////////////////////////////////////////////////////////////// // 
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
////////////////////////////////////////////////////////////////////// //////// 
/* This function is called by the main program once the game is over.    
It outputs a message congratulating the winner player.  
  Nothing is returned by this function. */ 
////////////////////////////////////////////////////////////////////// /////// 
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

