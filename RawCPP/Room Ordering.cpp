//	Jon Stoneman
//	CSCI 140
//	Project 1
//	4/24/2018
//	Description:
//		This program is meant to recieve information about a guest's
//		current plans for a stay at a beach resort

//Included Libraries and Namespace
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants
const int SINGLE_COST = 500;
const int DOUBLE_COST = 650;
const int SUITE_COST = 800;
const float SPA_COST = 62.5;

//Global Variables
double expenses;
char roomType = 'A';
string roomName;
double roomCost = 0;		
bool validRoom = 0;
int nights = -1;
int spa = -1;
int spaCalc;
double spaCost = 0;
int spaMultiplier = 0;
char coupon = 'A';
string confCoup;

int main()
{
	cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
	expenses = 0;
	cout << "Welcome to Cozy Carry's Country Inn and Day Spa!" << endl << endl;
//	Prompt and test for Room Type
	do
	{
		cout << "What kind of room would you like?" << endl;
		cout << "s - Single $" << SINGLE_COST << " per night" << endl;
		cout << "d - Double $" << DOUBLE_COST << " per night" << endl;
		cout << "x - Suite $" << SUITE_COST << " per night" << endl;
		cin >> roomType;
		switch (roomType)
		{
			case 'S':
			case 's':
				validRoom = 1;
				spaMultiplier = 1;
				roomName = "Single";
			break;
			
			case 'D':
			case 'd':
				spaMultiplier = 2;
				validRoom = "Double";
			break;
			
			case 'X':
			case 'x':
				validRoom = 1;
				spaMultiplier = 2;
				roomName = "Suite";
			break;
		}
	}while(validRoom == 0);
	
	
//	Prompt and test for correct amount of days
	do
	{
		cout << "How many nights do you want to stay?" << endl;
		cin >> nights;
	}while(nights <= 0);
	
	
//	Prompt and test for what kind of room and how many spa passes they can get

	do
	{
		cout << "How many spa passes would you like? (anywhere between 0 and " << nights * spaMultiplier << " passes)"<< endl;
		cin >> spa;
	}while((spa < 0) || (spa > (nights * spaMultiplier)));

	
	
//	tests for spa days and asks for permission to use a coupon
	if (spa > 0)
	{
		do {
		cout << "Would you like to use our complimentary coupon? (y/n)" << endl;
		cin >> coupon;
		}while((coupon != 'y') && (coupon != 'Y') && (coupon != 'n') && (coupon != 'N'));
	}
	
	
//Math stuff
	//Cost for Spas
	switch (coupon)
	{
		case 'y':
		case 'Y':
			if (spa <= 1)
			{
				spaCalc = 0;
			}
			else
			{
				spaCalc = spa - 1;
			}
			confCoup = "Yes";
			break;
		case 'n':
		case 'N':
			spaCalc = spa;
			confCoup = "No";
			break;
			
	}
	spaCost = spaCalc * SPA_COST;
	//Cost for Room
	switch (roomType)
		{
			case 'S':
			case 's':
				roomCost = SINGLE_COST * nights;
			break;
			
			case 'D':
			case 'd':
				roomCost = DOUBLE_COST * nights;
			break;
			
			case 'X':
			case 'x':
				roomCost = SUITE_COST * nights;
			break;
		}
	//total cost
	expenses = roomCost + spaCost;
	
//Receipt printed
	cout << setw(16)<< endl << "=========================================" << endl << setw(16)<< "|"<< endl;
	cout << "Room type:     |" << setw(10) << roomName << endl;
	cout << "Nights Stayed: |" << setw(10) << nights << endl;
	cout << "Room Cost:     |" << setw(10) << setprecision(2) << roomCost << " $" << endl;
	cout << setw(16) << "|" << endl << "---------------+---------------------" << endl << setw(16)<< "|" << endl;
	cout << "Spa Passes:    |" << setw(10) << spa << endl;
	cout << "Coupon:        |" << setw(10) << confCoup << endl;
	cout << "Spa Costs:     |" << setw(10) << setprecision(2) << spaCost << " $" << endl;
	cout << setw(16) << "|"<< endl << "---------------+---------------------" << endl << setw(16)<< "|"<< endl;
	cout << "Total Costs:   |" << setw(10) << setprecision(2) << expenses << " $" << endl;
	cout << setw(16) << "|" << endl << "=========================================" << endl << endl;
	cout << "Enjoy your stay!" << endl;
	cout << endl << "=========================================" << endl << endl;
	
}

